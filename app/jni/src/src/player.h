#pragma once
#include "types.h"



enum{
     sound_itemNet = 50,
     sound_fail = 60,
};

enum{
    bottle_state_empty = 2,
    bottle_state_redpotion = 3,
    bottle_state_greenpotion = 4,
    bottle_state_bluepotion = 5,
    bottle_state_fairy = 6,
    bottle_state_bee = 7,
    bottle_state_goodbee = 8,


    bottle_state_09_GiantMoldorm = 9,
//    bottle_state_08_Octorok = 0xa, // 0A
    bottle_state_0B_Cucco = 0xb,
    bottle_state_0C_OctorokStone = 0xc,
    bottle_state_0D_Buzzblob = 0xd,
    bottle_state_0E_Snapdragon = 0xe,
    bottle_state_0F_Octoballoon = 0xf,
    bottle_state_10_OctoballoonBaby = 0x10,
    bottle_state_11_Hinox = 0x11,
    bottle_state_12_Moblin = 0X12,
    bottle_state_13_MiniHelmasaur = 0x13,
    bottle_state_14_ThievesTownGrate = 0x14,
    bottle_state_15_Antifairy = 0x15,
    bottle_state_16_Elder_bounce = 0x16,
    bottle_state_17_Hoarder = 0x17,
    bottle_state_18_MiniMoldorm = 0x18,
    bottle_state_19_Poe = 0x19,
    bottle_state_1A_Smithy = 0x1a,
    bottle_state_1B_Arrow = 0x1b,
    bottle_state_1C_Statue = 0x1c,
    bottle_state_1D_FluteQuest = 0x1d,
    bottle_state_1E_CrystalSwitch = 0x1e,
    bottle_state_1F_SickKid = 0x1f,
    bottle_state_20_Sluggula = 0x20,
    bottle_state_21_WaterSwitch = 0x21,
    bottle_state_22_Ropa = 0x22,
    bottle_state_23_RedBari = 0x23,
//    bottle_state_23_RedBari = 0x24, //24
    bottle_state_25_TalkingTree = 0x25,
    bottle_state_26_HardhatBeetle = 0x26,
    bottle_state_27_Deadrock = 0x27,
    bottle_state_28_DarkWorldHintNPC = 0x28,
    bottle_state_29_HumanMulti_1 = 0x29,
    bottle_state_2A_SweepingLady = 0x2a,
    bottle_state_2B_Hobo = 0x2b,
    bottle_state_2C_Lumberjacks = 0x2c,
    bottle_state_2D_TelepathicTile = 0x2d,
    bottle_state_2E_FluteKid = 0x2e,
    bottle_state_2F_MazeGameLady = 0x2f,
    bottle_state_30_MazeGameGuy = 0x30,
    bottle_state_31_FortuneTeller = 0x31,
    bottle_state_32_QuarrelBros = 0x32,
    bottle_state_33_RupeePull = 0x33,
    bottle_state_34_YoungSnitchLady = 0x34,
    bottle_state_35_InnKeeper = 0x35,
    bottle_state_36_Witch = 0x36,
    bottle_state_37_Waterfall = 0x37,
    bottle_state_38_EyeStatue = 0x38,
    bottle_state_39_Locksmith = 0x39,
    bottle_state_3A_MagicBat = 0x3a,
    bottle_state_3B_DashItem = 0x3b,
    bottle_state_3C_TroughBoy = 0x3c,
    bottle_state_3D_OldSnitchLady = 0x3d,
//    bottle_state_17_Hoarder = 0x3e, //3E
    bottle_state_TutorialGuardOrBarrier = 0x3f, //3F
//    bottle_state_TutorialGuardOrBarrier = 0x40, //40
    bottle_state_41_BlueGuard = 0x41,
//    bottle_state_41_BlueGuard = 0x42, //42
//    bottle_state_41_BlueGuard = 0x43, //43
    bottle_state_44_BluesainBolt = 0x44,
    bottle_state_45_HogSpearMan = 0x45,
    bottle_state_46_BlueArcher = 0x46,
    bottle_state_47_GreenBushGuard = 0x47,
    bottle_state_48_RedJavelinGuard = 0x48,
    bottle_state_49_RedBushGuard = 0x49,
    bottle_state_4A_BombGuard = 0x4a,
    bottle_state_4B_GreenKnifeGuard = 0x4b,
    bottle_state_4C_Geldman = 0x4c,
    bottle_state_4D_Toppo = 0x4d,
    bottle_state_4E_Popo = 0x4e,
//    bottle_state_4E_Popo = 0x4f, //4F
    bottle_state_50_Cannonball = 0x50,
    bottle_state_51_ArmosStatue = 0x51,
    bottle_state_52_KingZora = 0x52,
    bottle_state_53_ArmosKnight = 0x53,
    bottle_state_54_Lanmolas = 0x54,
    bottle_state_55_Zora = 0x55,
    bottle_state_56_WalkingZora = 0x56,
    bottle_state_57_DesertStatue = 0x57,
    bottle_state_58_Crab = 0x58,
    bottle_state_59_LostWoodsBird = 0x59,
    bottle_state_5A_LostWoodsSquirrel = 0x5a,
    bottle_state_5B_Spark_Clockwise = 0x5b,
//    bottle_state_5B_Spark_Clockwise = 0x5c, //5C
    bottle_state_5D_Roller_VerticalDownFirst = 0x5d,
//    bottle_state_5D_Roller_VerticalDownFirst = 0x5e, //5E
//    bottle_state_5D_Roller_VerticalDownFirst = 0x5f, //5F
//    bottle_state_5D_Roller_VerticalDownFirst = 0x60, //60
    bottle_state_61_Beamos = 0x61,
    bottle_state_62_MasterSword = 0x62,
    bottle_state_63_DebirandoPit = 0x63,
    bottle_state_64_Debirando = 0x64,
    bottle_state_65_ArcheryGame = 0x65,
    bottle_state_66_WallCannonVerticalLeft = 0x66,
//    bottle_state_66_WallCannonVerticalLeft = 0x67, //67
//    bottle_state_66_WallCannonVerticalLeft = 0x68, //68
//    bottle_state_66_WallCannonVerticalLeft = 0x69, //69
    bottle_state_6A_BallNChain = 0x6a,
    bottle_state_6B_CannonTrooper = 0x6b,
    bottle_state_6C_MirrorPortal = 0x6c,
    bottle_state_6D_Rat = 0x6d,
    bottle_state_6E_Rope = 0x6e,
    bottle_state_6F_Keese = 0x6f, //bat
    bottle_state_70_KingHelmasaurFireball = 0x70,
    bottle_state_71_Leever = 0x71,
    bottle_state_72_FairyPond = 0x72,
    bottle_state_73_UncleAndPriest = 0x73,
    bottle_state_74_RunningMan = 0x74, //74
    bottle_state_75_BottleVendor = 0x75, //75
    bottle_state_76_Zelda = 0x76,
//    bottle_state_15_Antifairy = 0x77, //77
    bottle_state_78_MrsSahasrahla = 0x78,
    bottle_state_79_Bee = 0x79,
    bottle_state_7A_Agahnim = 0x7a,
    bottle_state_7B_AgahnimBalls = 0x7b,
    bottle_state_7C_GreenStalfos = 0x7c,
    bottle_state_7D_BigSpike = 0x7d,
    bottle_state_7E_Firebar_Clockwise = 0x7e,
//    bottle_state_7E_Firebar_Clockwise = 0x7f, //7F
    bottle_state_80_Firesnake = 0x80,
    bottle_state_81_Hover = 0x81,
    bottle_state_82_AntifairyCircle = 0x82,
    bottle_state_83_GreenEyegore = 0x83,
//    bottle_state_83_GreenEyegore = 0x84, //84
    bottle_state_85_YellowStalfos = 0x85,
    bottle_state_86_Kodongo = 0x86,
    bottle_state_87_KodongoFire = 0x87,
    bottle_state_88_Mothula = 0x88,
    bottle_state_89_MothulaBeam = 0x89,
    bottle_state_8A_SpikeBlock = 0x8a,
    bottle_state_8B_Gibdo = 0x8b,
    bottle_state_8C_Arrghus = 0x8c,
    bottle_state_8D_Arrghi = 0x8d,
    bottle_state_8E_Terrorpin = 0x8e,
    bottle_state_8F_Blob = 0x8f,
    bottle_state_90_Wallmaster = 0x90,
    bottle_state_91_StalfosKnight = 0x91,
    bottle_state_92_HelmasaurKing = 0x92,
    bottle_state_93_Bumper = 0x93,
    bottle_state_94_Pirogusu = 0x94,
    bottle_state_95_LaserEyeLeft = 0x95,
//    bottle_state_95_LaserEyeLeft = 0x96, //96
//    bottle_state_95_LaserEyeLeft = 0x97, //97
//    bottle_state_95_LaserEyeLeft = 0x98, //98
    bottle_state_99_Pengator = 0x99,
    bottle_state_9A_Kyameron = 0x9a,
    bottle_state_9B_Wizzrobe = 0x9b,
    bottle_state_9C_Zoro = 0x9c,
//    bottle_state_9C_Zoro = 0x9d, //9D
    bottle_state_9E_HauntedGroveOstritch = 0x9e,
    bottle_state_9F_HauntedGroveRabbit = 0x9f,
    bottle_state_A0_HauntedGroveBird = 0xa0,
    bottle_state_A1_Freezor = 0xa1,
    bottle_state_A2_Kholdstare = 0xa2,
    bottle_state_A3_KholdstareShell = 0xa3,
    bottle_state_A4_FallingIce = 0xa4,
    bottle_state_A5_Zazak = 0xa5, //A5
//    bottle_state_Zazak_Main = 0xa6, //A6
    bottle_state_A7_Stalfos = 0xa7,
    bottle_state_A8_GreenZirro = 0xa8,
//    bottle_state_A8_GreenZirro = 0xa9,
    bottle_state_AA_Pikit = 0xaa,
    bottle_state_AB_CrystalMaiden = 0xab,
    bottle_state_AC_Apple = 0xac,
    bottle_state_AD_OldMan = 0xad,
    bottle_state_AE_Pipe_Down = 0xae,
//    bottle_state_AE_Pipe_Down = 0xaf, //AF
//    bottle_state_AE_Pipe_Down = 0xb0, //B0
//    bottle_state_AE_Pipe_Down = 0xb1, //B1
    bottle_state_B2_PlayerBee = 0xb2, // ///////////////////bee
    bottle_state_B3_PedestalPlaque = 0xb3,
    bottle_state_B4_PurpleChest = 0xb4,
    bottle_state_B5_BombShop = 0xb5,
    bottle_state_B6_Kiki = 0xb6,
    bottle_state_B7_BlindMaiden = 0xb7,
    bottle_state_B8_DialogueTester = 0xb8,
    bottle_state_B9_BullyAndPinkBall = 0xb9,
    bottle_state_BA_Whirlpool = 0xba,
    bottle_state_BB_Shopkeeper = 0xbb,
    bottle_state_BC_Drunkard = 0xbc,
    bottle_state_BD_Vitreous = 0xbd,
    bottle_state_BE_VitreousEye = 0xbe,
    bottle_state_BF_Lightning = 0xbf,
    bottle_state_C0_Catfish = 0xc0,
    bottle_state_C1_CutsceneAgahnim = 0xc1,
    bottle_state_C2_Boulder = 0xc2,
    bottle_state_C3_Gibo = 0xc3,
    bottle_state_C4_Thief = 0xc4,
    bottle_state_C5_Medusa = 0xc5,
    bottle_state_C6_4WayShooter = 0xc6,
    bottle_state_C7_Pokey = 0xc7,
    bottle_state_C8_BigFairy = 0xc8,
    bottle_state_C9_Tektite = 0xc9,
    bottle_state_CA_ChainChomp = 0xca,
    bottle_state_CB_TrinexxRockHead = 0xcb,
    bottle_state_CC = 0xcc,
    bottle_state_CD = 0xcd,
    bottle_state_CE_Blind = 0xce,
    bottle_state_CF_Swamola = 0xcf,
    bottle_state_D0_Lynel = 0xd0,
    bottle_state_D1_BunnyBeam = 0xd1,
    bottle_state_D2_FloppingFish = 0xd2,
    bottle_state_D3_Stal = 0xd3,
    bottle_state_D4_Landmine = 0xd4,
    bottle_state_D5_DigGameGuy =0xd5 ,
    bottle_state_D6_Ganon = 0xd6,
//    bottle_state_D6_Ganon = 0xd7, //D7
    bottle_state_D8_Heart = 0xd8,
    bottle_state_D9_GreenRupee = 0xd9,
    bottle_state_DA_BlueRupee = 0xda, //DA
    bottle_state_DB_RedRupee = 0xdb, //DB
    bottle_state_DC_1Bomb = 0xdc, //DC
    bottle_state_DD_4Bombs = 0xdd, //DD
    bottle_state_DE_8Bombs = 0xde, //DE
    bottle_state_DF_SmallMagicFiller = 0xdf, //DF
    bottle_state_E0_BigMagicFiller = 0xe0, //E0
    bottle_state_E1_5Arrows = 0xe1, //E1
    bottle_state_E2_10Arrows = 0xe2, //E2
    bottle_state_E3_Fairy = 0xe3,
    bottle_state_E4_SmallKey = 0xe4,
    bottle_state_E5_BigKey = 0xe5, //E5
    bottle_state_E6_CollectableShield = 0xe6, //E6
    bottle_state_E7_Mushroom = 0xe7,
    bottle_state_E8_FakeSword = 0xe8,
    bottle_state_E9_PotionShop = 0xe9,
    bottle_state_EA_HeartContainer = 0xea, //EA
    bottle_state_EB_HeartPiece = 0xeb, //EB
    bottle_state_EC_ThrownItem = 0xec,
    bottle_state_ED_SomariaPlatform = 0xed,
    bottle_state_EE_MovableMantle = 0xee,
//    bottle_state_ED_SomariaPlatform = 0xef, //EF
//    bottle_state_ED_SomariaPlatform = 0xf0, //F0
//    bottle_state_ED_SomariaPlatform = 0xf1, //F1
    bottle_state_F2_MedallionTablet = 0xf2,


    bottle_state_00_Raven = 0xf3, //00
    bottle_state_01_Vulture_bounce = 0xf4,
    bottle_state_02_StalfosHead = 0xf5,
    bottle_state_NULL = 0xf6,      // 03
    bottle_state_04_PullSwitch_bounce = 0xf7, // 04
    bottle_state_05_PullSwitch_bounce = 0xf8, // 05
    bottle_state_06_PullSwitch_bounce = 0xf9, // 06
    bottle_state_07_PullSwitch_bounce = 0xfa, // 07
    bottle_state_08_Octorok = 0xfb,

};

//static const int8 bottle_state_empty = 2;
//static const int8 bottle_state_redpotion = 3;
//static const int8 bottle_state_greenpotion = 4;
//static const int8 bottle_state_bluepotion = 5;
//static const int8 bottle_state_fairy = 6;
//static const int8 bottle_state_bee = 7;
//static const int8 bottle_state_goodbee = 8;

static const int8 item_in_hand_rod = 1;                              //b00000001
static const int8 item_in_hand_hammer = 2;                           //b00000010
static const int8 item_in_hand_swordshield = 5;                      //b00000101 //often tested, but never assigned?
static const int8 item_in_hand_hammerorSwordRelatedMaybe = 0xa; //10 //b00001010 // sprite_main.c=>hammerRelated ; sprite.c=>swordRelated?
static const int8 item_in_hand_bow = 0x10; //16                      //b00010000
static const int8 item_in_hand_magic_powder = 0x40; //64             //b01000000
static const int8 item_in_hand_boomerang = 0x80; //128               //b10000000
static const int8 item_in_hand_dunno3 = 0x93;//147 = 128+16+2=1      //b10010011 //rod+hammer+bow+boomerang (not magicpowder)

enum{
    follower_indicator_noone = 0,
    follower_indicator_Zelda = 1,
    follower_indicator_0x3 = 3,
    follower_indicator_OldMan = 4,
    follower_indicator_Uncle_Telepathy = 5,
    follower_indicator_BlindMaiden = 6,
    follower_indicator_Smithy_Frog = 7,
    follower_indicator_Smith = 8, //Smith (not frog any more in light world)
    follower_indicator_LockSmith = 9,
    follower_indicator_Kiki = 10,
    follower_indicator_11 = 11,
    follower_indicator_PurpleChess = 12,
    follower_indicator_BigBomb = 13,
    follower_indicator_HandleTrigger = 0xe,
    follower_indicator_Bulbazaur = 16,
    follower_indicator_Squirtle = 32,
    follower_indicator_Charmander = 64,
};

//static const uint8 follower_indicator_noone = 0;
//static const uint8 follower_indicator_Zelda = 1;
//static const uint8 follower_indicator_0x3 = 3;
//static const uint8 follower_indicator_OldMan = 4;
//static const uint8 follower_indicator_Uncle_Telepathy = 5;
//static const uint8 follower_indicator_BlindMaiden = 6;
//static const uint8 follower_indicator_Smithy_Frog = 7;
//static const uint8 follower_indicator_Smith = 8; //Smith (not frog any more in light world)
//static const uint8 follower_indicator_LockSmith = 9;
//static const uint8 follower_indicator_Kiki = 10;
//static const uint8 follower_indicator_11 = 11;
//static const uint8 follower_indicator_PurpleChess = 12;
//static const uint8 follower_indicator_BigBomb = 13;
//static const uint8 follower_indicator_HandleTrigger = 0xe;

static const uint8 ciaLI_none = 0; //ciaLI stands for current_item_active_LinkItem
static const uint8 ciaLI_Bombs = 1;
static const uint8 ciaLI_Boomerang = 2;
static const uint8 ciaLI_Bow = 3;
static const uint8 ciaLI_Hammer = 4;
static const uint8 ciaLI_FireRod = 5;
static const uint8 ciaLI_IceRod =  6;
static const uint8 ciaLI_Net = 7;
static const uint8 ciaLI_ShovelAndFlute = 8;
static const uint8 ciaLI_Lamp = 9;
static const uint8 ciaLI_Powder =  10;
static const uint8 ciaLI_Bottle =  11;
static const uint8 ciaLI_Book = 12;
static const uint8 ciaLI_CaneOfByrna = 13;
static const uint8 ciaLI_Hookshot = 14;
static const uint8 ciaLI_Bombos = 15;
static const uint8 ciaLI_Ether = 16;
static const uint8 ciaLI_Quake = 17;
static const uint8 ciaLI_CaneOfSomaria = 18;
static const uint8 ciaLI_Cape = 19;
static const uint8 ciaLI_Mirror = 20;
static const uint8 ciaLI_Shovel = 21;
//(Ycar)

extern const uint8 kSwimmingTab1[4];
extern const uint8 kSwimmingTab2[2];

enum {
  kPlayerState_Ground = 0,
  kPlayerState_FallingIntoHole = 1,
  kPlayerState_RecoilWall = 2,
  kPlayerState_SpinAttacking = 3,
  kPlayerState_Swimming = 4,
  kPlayerState_TurtleRock = 5,
  kPlayerState_RecoilOther = 6,
  kPlayerState_Electrocution = 7,
  kPlayerState_Ether = 8,
  kPlayerState_Bombos = 9,
  kPlayerState_Quake = 10,
  kPlayerState_FallOfLeftRightLedge = 12,
  kPlayerState_JumpOffLedgeDiag = 14,
  kPlayerState_StartDash = 17,
  kPlayerState_StopDash = 18,
  kPlayerState_Hookshot = 19,
  kPlayerState_Mirror = 20,
  kPlayerState_HoldUpItem = 21,
  kPlayerState_AsleepInBed = 22,
  kPlayerState_PermaBunny = 23,
  kPlayerState_ReceivingEther = 25,
  kPlayerState_ReceivingBombos = 26,
  kPlayerState_OpeningDesertPalace = 27,
  kPlayerState_TempBunny = 28,
  kPlayerState_PullForRupees = 29,
  kPlayerState_SpinAttackMotion = 30,
};






void Dungeon_HandleLayerChange();
void CacheCameraProperties();
void CheckAbilityToSwim();
void Link_Main();
void Link_ControlHandler();
void LinkState_Default();
void HandleLink_From1D();
void PlayerHandler_00_Ground_3();
bool Link_HandleBunnyTransformation();
void LinkState_TemporaryBunny();
void PlayerHandler_17_Bunny();
void LinkState_Bunny_recache();
void Link_TempBunny_Func2();
void LinkState_HoldingBigRock();
void EtherTablet_StartCutscene();
void LinkState_ReceivingEther();
void BombosTablet_StartCutscene();
void LinkState_ReceivingBombos();
void LinkState_ReadingDesertTablet();
void HandleSomariaAndGraves();
void LinkState_Recoil();
void Link_HandleRecoilAndTimer(bool jump_into_middle);
void LinkState_OnIce();
void Link_HandleChangeInZVelocity();
void Player_ChangeZ(uint8 zd);
void LinkHop_HoppingSouthOW();
void LinkState_HandlingJump();
void LinkHop_FindTileToLandOnSouth();
void LinkState_HoppingHorizontallyOW();
void Link_HoppingHorizontally_FindTile_Y();
void Link_SetToDeepWater();
void LinkState_0F();
uint8 Link_HoppingHorizontally_FindTile_X(uint8 o);
void LinkState_HoppingDiagonallyUpOW();
void LinkState_HoppingDiagonallyDownOW();
void LinkHop_FindLandingSpotDiagonallyDown();
void Link_SplashUponLanding();
void LinkState_Dashing();
void LinkState_ExitingDash();
void Link_CancelDash();
void RepelDash();
void LinkApplyTileRebound();
void Sprite_RepelDash();
void Flag67WithDirections();
void LinkState_Pits();
void HandleLayerOfDestination();
void DungeonPitDoDamage();
void HandleDungeonLandingFromPit();
void PlayerHandler_04_Swimming();
void Link_HandleSwimMovements();
void Link_FlagMaxAccels();
void Link_SetIceMaxAccel();
void Link_SetMomentum();
void Link_ResetSwimmingState();
void Link_ResetStateAfterDamagingPit();
void ResetAllAcceleration();
void Link_HandleSwimAccels();
void Link_SetTheMaxAccel();
void LinkState_Zapped();
void PlayerHandler_15_HoldItem();
void Link_ReceiveItem(uint8 item, int chest_position);
void Link_TuckIntoBed();
void LinkState_Sleeping();
void Link_HandleSwordCooldown();
void Link_HandleYItem();
void Link_HandleAPress();
void Link_APress_PerformBasic(uint8 action_x2);
void HandleSwordSfxAndBeam();
void Link_CheckForSwordSwing();
void HandleSwordControls();
void Link_ResetSwordAndItemUsage();
void Player_Sword_SpinAttackJerks_HoldDown();
void LinkItem_Rod();
void LinkItem_Hammer();
void LinkItem_Bow();
void LinkItem_Boomerang();
void Link_ResetBoomerangYStuff();
void LinkItem_Bombs();
void LinkItem_Bottle();
void LinkItem_Lamp();
void LinkItem_Powder();
void LinkItem_ShovelAndFlute();
void LinkItem_Shovel();
void LinkItem_Flute();
void LinkItem_Book();
void LinkItem_Ether();
void LinkState_UsingEther();
void LinkItem_Bombos();
void LinkState_UsingBombos();
void LinkItem_Quake();
void LinkState_UsingQuake();
void Link_ActivateSpinAttack();
void Link_AnimateVictorySpin();
void LinkState_SpinAttack();
void LinkItem_Mirror();
void DoSwordInteractionWithTiles_Mirror();
void LinkState_CrossingWorlds();
void Link_PerformDesertPrayer();
void HandleFollowersAfterMirroring();
void LinkItem_Hookshot();
void LinkState_Hookshotting();
void LinkItem_Cape();
void Link_ForceUnequipCape();
void Link_ForceUnequipCape_quietly();
void HaltLinkWhenUsingItems();
void Link_HandleCape_passive_LiftCheck();
void Player_CheckHandleCapeStuff();
void LinkItem_CaneOfSomaria();
void LinkItem_CaneOfByrna();
bool SearchForByrnaSpark();
void LinkItem_Net();
bool CheckYButtonPress();
bool LinkCheckMagicCost(uint8 x);
void Refund_Magic(uint8 x);
void Link_ItemReset_FromOverworldThings();
void Link_PerformThrow();
void Link_APress_LiftCarryThrow();
void Link_PerformDash();
void Link_PerformGrab();
void Link_APress_PullObject();
void Link_PerformStatueDrag();
void Link_APress_StatueDrag();
void Link_PerformRupeePull();
void LinkState_TreePull();
void Link_PerformRead();
void Link_PerformOpenChest();
bool Link_CheckNewAPress();
bool Link_HandleToss();
void Link_HandleDiagonalCollision();
void Player_LimitDirections_Inner();
void Link_HandleCardinalCollision();
void RunSlopeCollisionChecks_VerticalFirst();
void RunSlopeCollisionChecks_HorizontalFirst();
bool CheckIfRoomNeedsDoubleLayerCheck();
void CreateVelocityFromMovingBackground();
void StartMovementCollisionChecks_Y();
void StartMovementCollisionChecks_Y_HandleIndoors();
void HandlePushingBonkingSnaps_Y();
void StartMovementCollisionChecks_Y_HandleOutdoors();
bool RunLedgeHopTimer(); // carry
void Link_BonkAndSmash();
void Link_AddInVelocityYFalling();
void CalculateSnapScratch_Y();
void ChangeAxisOfPerpendicularDoorMovement_Y();
void Link_AddInVelocityY();
void Link_HopInOrOutOfWater_Y();
void Link_FindValidLandingTile_North();
void Link_FindValidLandingTile_DiagonalNorth();
void StartMovementCollisionChecks_X();
void StartMovementCollisionChecks_X_HandleIndoors();
void HandlePushingBonkingSnaps_X();
void StartMovementCollisionChecks_X_HandleOutdoors();
void SnapOnX();
void CalculateSnapScratch_X();
int8 ChangeAxisOfPerpendicularDoorMovement_X();
void Link_HopInOrOutOfWater_X();
void Link_HandleDiagonalKickback();
void TileDetect_MainHandler(uint8 item);
bool Link_PermissionForSloshSounds();
bool PushBlock_AttemptToPushTheBlock(uint8 what, uint16 x, uint16 y);
uint8 Link_HandleLiftables();
void HandleNudging(int8 arg_r0);
void TileBehavior_HandleItemAndExecute(uint16 x, uint16 y);
uint8 PushBlock_GetTargetTileFlag(uint16 x, uint16 y);
void FlagMovingIntoSlopes_Y();
void FlagMovingIntoSlopes_X();
void Link_HandleRecoiling();
void Player_HandleIncapacitated_Inner2();
void Link_HandleVelocity();
void Link_MovePosition();
void Link_HandleVelocityAndSandDrag(uint16 x, uint16 y);
void HandleSwimStrokeAndSubpixels();
void Player_SomethingWithVelocity_TiredOrSwim(uint16 xvel, uint16 yvel);
void Link_HandleMovingFloor();
void Link_ApplyMovingFloorVelocity();
void Link_ApplyConveyor();
void Link_HandleMovingAnimation_FullLongEntry();
void Link_HandleMovingAnimation_StartWithDash();
void Link_HandleMovingAnimationSwimming();
void Link_HandleMovingAnimation_Dash();
void HandleIndoorCameraAndDoors();
void HandleDoorTransitions();
void ApplyLinksMovementToCamera();
uint8 FindFreeMovingBlockSlot(uint8 x);
bool InitializePushBlock(uint8 r14, uint8 idx);
void Sprite_Dungeon_DrawSinglePushBlock(int j);
void Link_Initialize();
void Link_ResetProperties_A();
void Link_ResetProperties_B();
void Link_ResetProperties_C();
bool Link_CheckForEdgeScreenTransition();
void CacheCameraPropertiesIfOutdoors();
void SomariaBlock_HandlePlayerInteraction(int k);
void Gravestone_Move(int k);
void Gravestone_ActAsBarrier(int k);
void AncillaAdd_DugUpFlute(uint8 a, uint8 y);
void AncillaAdd_CaneOfByrnaInitSpark(uint8 a, uint8 y);
void AncillaAdd_ShovelDirt(uint8 a, uint8 y);
void AncillaAdd_Hookshot(uint8 a, uint8 y);
void ResetSomeThingsAfterDeath(uint8 a);
void SpawnHammerWaterSplash();
void DiggingGameGuy_AttemptPrizeSpawn();
