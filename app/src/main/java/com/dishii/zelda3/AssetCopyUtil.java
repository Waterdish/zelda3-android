
package com.dishii.zelda3;

import android.content.Context;
import android.content.res.AssetManager;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

public class AssetCopyUtil {
    private static final String TAG = "AssetCopyUtil";

    public static void copyAssetsToExternal(Context context, String assetsFolderPath, String externalFolderPath) throws IOException {
        AssetManager assetManager = context.getAssets();
        String[] assetFiles = assetManager.list(assetsFolderPath);

        if (assetFiles == null) {
            Log.w(TAG, "No assets found in: " + assetsFolderPath);
            return;
        }

        for (String assetFile : assetFiles) {
            // Use try-with-resources for automatic resource management (API 21+)
            try (InputStream in = assetManager.open(assetsFolderPath + File.separator + assetFile);
                 FileOutputStream out = new FileOutputStream(externalFolderPath + File.separator + assetFile)) {

                byte[] buffer = new byte[8192];  // Larger buffer for better performance
                int read;
                while ((read = in.read(buffer)) != -1) {
                    out.write(buffer, 0, read);
                }
            } catch (IOException e) {
                Log.e(TAG, "Failed to copy asset: " + assetFile, e);
                throw e;  // Re-throw to let caller handle
            }
        }
    }
}
