#pragma once
#include "types.h"

static const uint8 kOverworldMap_tab1[333] = {
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdf,
  0xde, 0xdd, 0xdc, 0xdb, 0xda, 0xd8, 0xd7, 0xd6, 0xd5, 0xd4, 0xd3, 0xd2, 0xd1, 0xd0, 0xcf, 0xce,
  0xcd, 0xcc, 0xcb, 0xca, 0xc9, 0xc7, 0xc6, 0xc5, 0xc4, 0xc3, 0xc2, 0xc1, 0xc0, 0xbf, 0xbe, 0xbd,
  0xbc, 0xbb, 0xba, 0xb9, 0xb8, 0xb7, 0xb6, 0xb5, 0xb4, 0xb3, 0xb2, 0xb1, 0xb0, 0xaf, 0xae, 0xad,
  0xac, 0xab, 0xaa, 0xa9, 0xa8, 0xa7, 0xa6, 0xa5, 0xa4, 0xa3, 0xa2, 0xa1, 0xa0, 0x9f, 0x9e, 0x9d,
  0x9c, 0x9b, 0x9b, 0x9a, 0x99, 0x98, 0x97, 0x96, 0x95, 0x94, 0x93, 0x92, 0x91, 0x90, 0x8f, 0x8e,
  0x8d, 0x8c, 0x8b, 0x8b, 0x8a, 0x89, 0x88, 0x87, 0x86, 0x85, 0x84, 0x83, 0x82, 0x81, 0x81, 0x80,
  0x7f, 0x7e, 0x7d, 0x7c, 0x7b, 0x7a, 0x79, 0x79, 0x78, 0x77, 0x76, 0x75, 0x74, 0x73, 0x72, 0x72,
  0x71, 0x70, 0x6f, 0x6e, 0x6d, 0x6c, 0x6c, 0x6b, 0x6a, 0x69, 0x68, 0x67, 0x67, 0x66, 0x65, 0x64,
  0x63, 0x62, 0x62, 0x61, 0x60, 0x5f, 0x5e, 0x5d, 0x5d, 0x5c, 0x5b, 0x5a, 0x59, 0x59, 0x58, 0x57,
  0x56, 0x55, 0x55, 0x54, 0x53, 0x52, 0x51, 0x51, 0x50, 0x4f, 0x4e, 0x4e, 0x4d, 0x4c, 0x4b, 0x4a,
  0x4a, 0x49, 0x48, 0x47, 0x47, 0x46, 0x45, 0x44, 0x44, 0x43, 0x42, 0x41, 0x41, 0x40, 0x3f, 0x3e,
  0x3e, 0x3d, 0x3c, 0x3c, 0x3b, 0x3a, 0x39, 0x39, 0x38, 0x37, 0x36, 0x36, 0x35, 0x34, 0x34, 0x33,
  0x32, 0x32, 0x31, 0x30, 0x2f, 0x2f, 0x2e, 0x2d, 0x2d, 0x2c, 0x2b, 0x2b, 0x2a, 0x29, 0x29, 0x28,
  0x27, 0x27, 0x26, 0x25, 0x25, 0x24, 0x23, 0x23, 0x22, 0x21, 0x21, 0x20, 0x1f, 0x1f, 0x1e, 0x1d,
  0x1d, 0x1c, 0x1c, 0x1b, 0x1a, 0x1a, 0x19, 0x18, 0x18, 0x17, 0x17, 0x16, 0x15, 0x15, 0x14, 0x14,
  0x13, 0x12, 0x12, 0x11, 0x10, 0x10,  0xf,  0xf,  0xe,  0xe,  0xd,  0xc,  0xc,  0xb,  0xb,  0xa,
     9,    9,    8,    8,    7,    7,    6,    5,    5,    4,    4,    3,    3,    2,    1,    1,
     0,    0,    0,    0, 0xff, 0xfe, 0xfe, 0xfd, 0xfc, 0xfc, 0xfb, 0xfb, 0xfa, 0xf9, 0xf9, 0xf8,
  0xf7, 0xf7, 0xf6, 0xf5, 0xf4, 0xf4, 0xf3, 0xf2, 0xf2, 0xf1, 0xf0, 0xef, 0xee, 0xee, 0xed, 0xec,
  0xeb, 0xea, 0xe9, 0xe8, 0xe8, 0xe7, 0xe6, 0xe5, 0xe4, 0xe3, 0xe2, 0xe1, 0xe0,
};


const uint8 *GetDungmapFloorLayout();
uint8 GetOtherDungmapInfo(int count);
void DungMap_4();
void Module_Messaging_6();
void OverworldMap_SetupHdma();
const uint8 *GetLightOverworldTilemap();
void SaveGameFile();
void TransferMode7Characters();
void Module0E_Interface();
void Module_Messaging_0();
void Module0E_05_DesertPrayer();
void Module0E_04_RedPotion();
void Module0E_08_GreenPotion();
void Module0E_09_BluePotion();
void Module0E_0B_SaveMenu();
void Module1B_SpawnSelect();
void CleanUpAndPrepDesertPrayerHDMA();
void DesertPrayer_InitializeIrisHDMA();
void DesertPrayer_BuildIrisHDMATable();
Pair16U DesertHDMA_CalculateIrisShapeLine();
void Animate_GAMEOVER_Letters();
void GameOverText_SweepLeft();
void GameOverText_UnfurlRight();
void Module12_GameOver();
void GameOver_AdvanceImmediately();
void Death_Func1();
void GameOver_DelayBeforeIris();
void GameOver_IrisWipe();
void GameOver_SplatAndFade();
void Death_Func6();
void Death_Func4();
void Animate_GAMEOVER_Letters_bounce();
void GameOver_Finalize_GAMEOVR();
void GameOver_SaveAndOrContinue();
void Death_Func15(bool count_as_death);
void GameOver_AnimateChoiceFairy();
void GameOver_InitializeRevivalFairy();
void RevivalFairy_Main_bounce();
void GameOver_RiseALittle();
void GameOver_Restore0D();
void GameOver_Restore0E();
void GameOver_ResituateLink();
void Module0E_0A_FluteMenu();
void FluteMenu_HandleSelection();
void FluteMenu_LoadSelectedScreen();
void Overworld_LoadOverlayAndMap();
void FluteMenu_FadeInAndQuack();
void BirdTravel_Finish_Doit();
void Messaging_OverworldMap();
void WorldMap_FadeOut();
void WorldMap_LoadLightWorldMap();
void WorldMap_LoadDarkWorldMap();
void WorldMap_LoadSpriteGFX();
void WorldMap_Brighten();
void WorldMap_PlayerControl();
void WorldMap_RestoreGraphics();
void Attract_SetUpConclusionHDMA();
void WorldMap_ExitMap();
void WorldMap_SetUpHDMA();
void WorldMap_FillTilemapWithEF();
void WorldMap_HandleSprites();
bool OverworldMap_CheckForPendant(int k);
bool OverworldMap_CheckForCrystal(int k);
void Module0E_03_DungeonMap();
void Module0E_03_01_DrawMap();
void Module0E_03_01_00_PrepMapGraphics();
void Module0E_03_01_01_DrawLEVEL();
void Module0E_03_01_02_DrawFloorsBackdrop();
void DungeonMap_BuildFloorListBoxes(uint8 t5, uint16 r14);
void Module0E_03_01_03_DrawRooms();
void DungeonMap_DrawBorderForRooms(uint16 pd, uint16 mask);
void DungeonMap_DrawFloorNumbersByRoom(uint16 pd, uint16 r8);
void DungeonMap_DrawDungeonLayout(int pd);
void DungeonMap_DrawSingleRowOfRooms(int i, int arg_x);
void DungeonMap_DrawRoomMarkers();
void DungeonMap_HandleInputAndSprites();
void DungeonMap_HandleInput();
void DungeonMap_HandleMovementInput();
void DungeonMap_HandleFloorSelect();
void DungeonMap_ScrollFloors();
void DungeonMap_DrawSprites();
void DungeonMap_DrawLinkPointing(int spr_pos, uint8 r2, uint8 r3);
int DungeonMap_DrawBlinkingIndicator(int spr_pos);
int DungeonMap_DrawLocationMarker(int spr_pos, uint16 r14);
int DungeonMap_DrawFloorNumberObjects(int spr_pos);
void DungeonMap_DrawFloorBlinker();
int DungeonMap_DrawBossIcon(int spr_pos);
int DungeonMap_DrawBossIconByFloor(int spr_pos);
void DungeonMap_RecoverGFX();
void ToggleStarTilesAndAdvance();
void Death_InitializeGameOverLetters();
void CopySaveToWRAM();
void RenderText();
void RenderText_PostDeathSaveOptions();
void Text_Initialize();
void Text_Initialize_initModuleStateLoop();
void Text_InitVwfState();
void Text_LoadCharacterBuffer();
uint8 *Text_WritePlayerName(uint8 *p);
uint8 Text_FilterPlayerNameCharacters(uint8 a);
void Text_Render();
void RenderText_Draw_Border();
void RenderText_Draw_BorderIncremental();
void RenderText_Draw_CharacterTilemap();
void RenderText_Draw_MessageCharacters();
void RenderText_Draw_Finish();
void VWF_RenderSingle();
void RenderText_Draw_Choose2LowOr3();
void RenderText_Draw_ChooseItem();
void RenderText_FindYItem_Previous();
void RenderText_FindYItem_Next();
void RenderText_DrawSelectedYItem();
void RenderText_Draw_Choose2HiOr3();
void RenderText_Draw_Choose3();
void RenderText_Draw_Choose1Or2();
bool RenderText_Draw_Scroll();
void RenderText_SetDefaultWindowPosition();
void RenderText_DrawBorderInitialize();
uint16 *RenderText_DrawBorderRow(uint16 *d, int y);
void Text_BuildCharacterTilemap();
void RenderText_Refresh();
void Text_GenerateMessagePointers();
void DungMap_LightenUpMap();
void DungMap_Backup();
void DungMap_FadeMapToBlack();
void DungMap_RestoreOld();
void Death_PlayerSwoon();
void Death_PrepFaint();
void DisplaySelectMenu();
bool DidPressButtonForMap();
