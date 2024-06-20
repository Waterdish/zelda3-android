
package com.dishii.zelda3;
import org.libsdl.app.SDL;
import org.libsdl.app.SDLActivity;
import org.libsdl.app.SDLControllerManager;

import android.graphics.Rect;
import android.os.Bundle;
import android.os.Environment;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.FileOutputStream;

import android.os.Handler;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.inputmethod.CompletionInfo;
import android.view.inputmethod.CorrectionInfo;
import android.view.inputmethod.ExtractedText;
import android.view.inputmethod.ExtractedTextRequest;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.InputContentInfo;
import android.widget.Toast;
import android.widget.SeekBar;

//This class is the main SDLActivity and just sets up a bunch of default files
public class MainActivity extends SDLActivity {

    public boolean dPad_isPressed = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Check if external storage is available
        if (isExternalStorageWritable()) {
            // Get the root directory of the external storage
            File externalDir = getExternalFilesDir(null);

            if (externalDir != null) {

                // Create a file object for the config file
                File configFile = new File(externalDir, "zelda3.ini");
                File datNotice = new File(externalDir, "PLACE zelda3_assets.dat HERE");
                File saves_folder = new File(externalDir+ File.separator + "saves");
                File saves_ref_folder = new File(saves_folder + File.separator + "ref");

                // Check if the folder doesn't exist, then create it
                saves_folder.mkdirs();
                saves_ref_folder.mkdirs();

                //copy reference saves and config to external data dir so user can change if needed.
                try {
                    AssetCopyUtil.copyAssetsToExternal(this, "saves/ref", getExternalFilesDir(null).getAbsolutePath() + "/saves/ref");
                    datNotice.createNewFile();
                    if (configFile.createNewFile()) {
                        InputStream inputStream;
                        try {
                            inputStream = getAssets().open("zelda3.ini");  // Replace with your actual asset file name

                        } catch (IOException e) {
                            e.printStackTrace();
                            return;
                        }
                        // Write configuration data to configFile
                        writeDataToFile(configFile,inputStream);
                    }
                } catch (IOException e) {
                    e.printStackTrace();
                }

            }
        }
        inflateOverlay(); //Ycar: To have some buttons onScreen !
    }
    //Ycar: Add an overlay of buttons to the screen
    public void inflateOverlay() {
        LayoutInflater inflater = getLayoutInflater();
        View overlayView = inflater.inflate(R.layout.layout, null);

        // Add the overlay
        ViewGroup rootView = (ViewGroup) getWindow().getDecorView().findViewById(android.R.id.content);
        rootView.addView(overlayView);

        // The following mapping needs to match the one in zelda3.ini
        int keyCodeFor_START = KeyEvent.KEYCODE_N;
        int keyCodeFor_SELECT = KeyEvent.KEYCODE_V;
        int keyCodeFor_A = KeyEvent.KEYCODE_X;
        int keyCodeFor_B = KeyEvent.KEYCODE_Z;
        int keyCodeFor_X = KeyEvent.KEYCODE_S;
        int keyCodeFor_Y = KeyEvent.KEYCODE_A;
        int keyCodeFor_L = KeyEvent.KEYCODE_C;
        int keyCodeFor_R = KeyEvent.KEYCODE_BACK;
        int keyCodeFor_Up = KeyEvent.KEYCODE_Y;
        int keyCodeFor_Down = KeyEvent.KEYCODE_H;
        int keyCodeFor_Left = KeyEvent.KEYCODE_G;
        int keyCodeFor_Right = KeyEvent.KEYCODE_J;
        int keyCodeFor_Turbo = KeyEvent.KEYCODE_M;

        final boolean[] hasScreenBeenTouched = {false};

        // Manage touch events from the keys
        overlayView.findViewById(R.id.ButtonKeyboard).setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View view) {
               SDLActivity.showTextInput(10, -200, 30, 40);
           }
       });
       overlayView.findViewById(R.id.Button_start).setOnTouchListener(new View.OnTouchListener() {
          @Override
          public boolean onTouch(View view, MotionEvent motionEvent) {
              switch(motionEvent.getAction()){
                  case MotionEvent.ACTION_DOWN:
                      onNativeKeyDown(keyCodeFor_START);
                      return true;
                  case MotionEvent.ACTION_UP:
                      onNativeKeyUp(keyCodeFor_START);
                      return true;
              }
              return false;
          }
      });
        overlayView.findViewById(R.id.Button_select).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch(motionEvent.getAction()){
                    case MotionEvent.ACTION_DOWN:
                        onNativeKeyDown(keyCodeFor_SELECT);
                        return true;
                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_SELECT);
                        return true;
                }
                return false;
            }
        });
        overlayView.findViewById(R.id.Button_A).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch(motionEvent.getAction()){
                    case MotionEvent.ACTION_DOWN:
                        onNativeKeyDown(keyCodeFor_A);
                        return true;
                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_A);
                        return true;
                }
                return false;
            }
        });
        overlayView.findViewById(R.id.Button_B).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch(motionEvent.getAction()){
                    case MotionEvent.ACTION_DOWN:
                        onNativeKeyDown(keyCodeFor_B);
                        return true;
                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_B);
                        return true;
                }
                return false;
            }
        });
        overlayView.findViewById(R.id.Button_X).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch(motionEvent.getAction()){
                    case MotionEvent.ACTION_DOWN:
                        onNativeKeyDown(keyCodeFor_X);
                        return true;
                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_X);
                        return true;
                }
                return false;
            }
        });
        overlayView.findViewById(R.id.Button_Y).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch(motionEvent.getAction()){
                    case MotionEvent.ACTION_DOWN:
                        onNativeKeyDown(keyCodeFor_Y);
                        return true;
                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_Y);
                        return true;
                }
                return false;
            }
        });
        overlayView.findViewById(R.id.Button_L).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch(motionEvent.getAction()){
                    case MotionEvent.ACTION_DOWN:
                        onNativeKeyDown(keyCodeFor_L);
                        return true;
                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_L);
                        return true;
                }
                return false;
            }
        });
        overlayView.findViewById(R.id.Button_R).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch(motionEvent.getAction()){
                    case MotionEvent.ACTION_DOWN:
                        onNativeKeyDown(keyCodeFor_R);
                        return true;
                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_R);
                        return true;
                }
                return false;
            }
        });
        overlayView.findViewById(R.id.Button_Turbo).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {

                switch (motionEvent.getAction()) {
                    case MotionEvent.ACTION_DOWN:
                        onNativeKeyDown(keyCodeFor_Turbo);
                        return true;
                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_Turbo);
                        return true;
                }
                return false;
            }
        });


        overlayView.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                if (!hasScreenBeenTouched[0]) {
                    overlayView.setAlpha(1f);
                    hasScreenBeenTouched[0] = true;
                }
                return false;
            }
        });

        ((SeekBar)overlayView.findViewById(R.id.seekBar_Alpha)).setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar view, int progress, boolean fromUser) {
                float alpha = progress/100f;
                overlayView.setAlpha(alpha);
            }
            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {
            }
            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {
            }
        });

        overlayView.findViewById(R.id.Button_Dpad).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                switch(motionEvent.getAction()){
                    case MotionEvent.ACTION_DOWN:
                        if (motionEvent.getX() > (view.getWidth()*0.67)) {
                            onNativeKeyDown(keyCodeFor_Right);
                        }else if (motionEvent.getX() < (view.getWidth()*0.33)) {
                            onNativeKeyDown(keyCodeFor_Left);
                        }
                        if (motionEvent.getY() > (view.getHeight()*0.67)) {
                            onNativeKeyDown(keyCodeFor_Down);
                        }else if (motionEvent.getY() < (view.getHeight()*0.33)) {
                            onNativeKeyDown(keyCodeFor_Up);
                        }else{
                        }
                        return true;

                    case MotionEvent.ACTION_UP:
                        onNativeKeyUp(keyCodeFor_Left);
                        onNativeKeyUp(keyCodeFor_Right);
                        onNativeKeyUp(keyCodeFor_Down);
                        onNativeKeyUp(keyCodeFor_Up);
                        return true;

                    case MotionEvent.ACTION_MOVE: //Support sliding on the dpad
                        onNativeKeyUp(keyCodeFor_Left);
                        onNativeKeyUp(keyCodeFor_Right);
                        onNativeKeyUp(keyCodeFor_Down);
                        onNativeKeyUp(keyCodeFor_Up);
                        if (motionEvent.getX() > (view.getWidth()*0.67)) {
                            onNativeKeyDown(keyCodeFor_Right);
                        }else if (motionEvent.getX() < (view.getWidth()*0.33)) {
                            onNativeKeyDown(keyCodeFor_Left);
                        }
                        if (motionEvent.getY() > (view.getHeight()*0.67)) {
                            onNativeKeyDown(keyCodeFor_Down);
                        }else if (motionEvent.getY() < (view.getHeight()*0.33)) {
                            onNativeKeyDown(keyCodeFor_Up);
                        }else{
                        }
                        return true;
                }
                return false;
            }
        });
    }

    private void writeDataToFile(File file,InputStream inputStream) {
        try {
            // Copy the content from the asset InputStream to the target file
            FileOutputStream outputStream = new FileOutputStream(file);
            byte[] buffer = new byte[1024];
            int length;
            while ((length = inputStream.read(buffer)) > 0) {
                outputStream.write(buffer, 0, length);
            }
            outputStream.close();
            inputStream.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    // Check if external storage is available and writable
    private boolean isExternalStorageWritable() {
        String state = Environment.getExternalStorageState();
        return Environment.MEDIA_MOUNTED.equals(state);
    }
}
