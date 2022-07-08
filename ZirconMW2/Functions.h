#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__
#include "handle.h"

enum svscmd_type {
	SV_CMD_CAN_IGNORE = 0x0,
	SV_CMD_RELIABLE = 0x1,
};

extern void(*SV_Cmd_ArgvBuffer)(int, char*, int);
extern void(*Cmd_CheckNetNotify_f)(int);
extern void(*SendScoreboard)(gentity_s*);
extern void(*Cmd_Where_f)(gentity_s*);
extern void(*Cmd_CallVote_f)(gentity_s*);
extern void(*Cmd_Vote_f)(gentity_s*);
extern void(*Cmd_FollowCycle_f)(gentity_s*, int);
extern void(*Cmd_MenuResponse_f)(gentity_s*);

extern void(*SV_GameSendServerCommand)(int clientNum, svscmd_type type, const char* cmd);
extern int(*G_DObjGetWorldTagPos)(gentity_s* ent, scr_string_t tagName, float* out);
extern bool(*Session_IsHost)(int sessionData, const int clientNum);
extern int(*G_SoundAliasIndex)(const char* soundName);
extern int(*G_EntLinkTo)(gentity_s* self, gentity_s* parent, short tagName);
extern void(*G_InitPlayerLinkAngles)(gentity_s* ent);
extern char*(*BG_GetWeaponNameComplete)(Weapon weapon, char* output, size_t maxStringLen);
extern void(*ClientUserInfoChanged)(int clientNum);
extern void(*SV_DropClient)(int cl, const char* reason, bool tellThem);
extern dvar_s*(*Dvar_FindMalleableVar)(const char* dvarName);
extern void(*Scr_PlayerDamage)(gentity_s *self, gentity_s *inflictor, gentity_s *attacker, int damage, int dflags, int meansOfDeath, int iweapon, const float *vPoint, const float *vDir, hitLocation_t hitLoc, int timeOffset);
extern void(*player_die)(gentity_s* self, gentity_s* inflictor, gentity_s* attacker, int damage, int meansOfDeath, int WeaponIndex, const float *vDir, int hitLocation, int psTime);
extern void(*G_FreeEntity)(gentity_s* ent);
extern void(*G_LocationalTrace)(trace_t *results, const float *start, const float *end, int passEntityNum, int contentmask, char *priorityMap);
extern int(*G_LocationalTracePassed)(const float *start, const float *end, int passEntityNum, int passEntityNum1, int contentmask, char *priorityMap);
extern uint16_t(*Trace_GetEntityHitId)(trace_t* result);
extern gentity_s*(*G_Spawn)();
extern void(*SV_LinkEntity)(gentity_s* ent);
extern void(*G_SetAngle)(gentity_s* ent, const float* angles);
extern void(*G_SetOrigin)(gentity_s* ent, const float* origin);
extern void(*G_EntUnlink)(gentity_s* ent, bool relinking);
extern void(*SV_UnlinkEntity)(gentity_s* ent);
extern const char*(*Dvar_GetString)(const char* dvarName);
extern void(*SetClientViewAngle)(gentity_s* ent, const float* angle);
extern int(*SV_DObjGetBoneIndex)(gentity_s* ent, uint16_t tag);
extern void(*G_AddEvent)(gentity_s* ent, unsigned int Event, unsigned int eventParm);
extern int(*G_EffectIndex)(const char* name);
extern int(*G_FindConfigStringIndex)(const char* name, int start, const unsigned int max, const int create, const char *errormsg);
extern int(*BG_GetWeaponForName)(const char* name);
extern void(*SV_SetGameEndTime)(int time);
extern int(*G_irand)(int min, int max);
extern void(*BG_GetPlayerEyePosition)(playerState_s* ps, float* origin, int gameTime);
extern void(*SV_MapRestart)(int saveGame);
extern void(*Cbuf_AddText)(int localClientNum, const char* text);
extern void(*G_GivePlayerWeapon)(playerState_s* ps, Weapon weapon, char altWeaponIndex, bool isAkimbo);
extern void(*Scr_SetFxAngles)(int givenAxisCount, float(*axis)[3], float *angles);
extern gentity_s*(*Scr_PlayFxInternal)(int fxId, float* pos, float(*forward)[3], float(*up)[3]);

int G_GetTime();
int getClient_s(int clientNum);
char* getClientName(int clientNum, bool withAccess);
void PlayerLinkTo(gentity_s* self, gentity_s* parent);
gentity_s* Scr_Spawn(const char* classname, float* origin, int flag = -1);
float Vec3DistanceSq(float* veca, float* vecb);
bool Scr_Closer(float* startingPoint, float* trueIfCloser, float* falseIfCloser);
void UnlocksThread(uint64_t arg);
gentity_s* getBrushModel();
gentity_s* SpawnModel(const char* model, float* origin, bool makeSolid);
void SpawnTurret(const char* turretWeapon, float* origin, float* angles = 0);
void DeletePlatform();
void SpawnPlatform(float origin[3]);
void SpawnObject(float origin[3]);
void SpawnObject2(float origin[3]);
void SpawnObject3(float origin[3]);
void SpawnObject4(float origin[3]);
void SpawnObject5(float origin[3]);
void SpawnObject7(float origin[3]);
void SpawnObject8(float origin[3]);
void SpawnObject9(float origin[3]);
void SpawnObject10(float origin[3]);
void SpawnObject11(float origin[3]);
void SpawnObject12(float origin[3]);
void SpawnObject13(float origin[3]);
void SpawnObject14(float origin[3]);
void SpawnObject15(float origin[3]);
void SpawnObject16(float origin[3]);
void SpawnObject17(float origin[3]);
void SpawnObject18(float origin[3]);
void SpawnObject19(float origin[3]);
void SpawnObject20(float origin[3]);
void SpawnObject21(float origin[3]);
void SpawnObject22(float origin[3]);
void SpawnObject23(float origin[3]);
void SpawnObject24(float origin[3]);
void SpawnObject25(float origin[3]);
void SpawnObject26(float origin[3]);
void SpawnObject27(float origin[3]);
void SpawnObject28(float origin[3]);
void SpawnObject29(float origin[3]);
void SpawnObject30(float origin[3]);
void SpawnObject31(float origin[3]);
void SpawnObject32(float origin[3]);
void SpawnObject33(float origin[3]);
void SpawnObject34(float origin[3]);
void SpawnObject35(float origin[3]);
void SpawnObject36(float origin[3]);
void SpawnObject37(float origin[3]);
void SpawnObject38(float origin[3]);
void SpawnObject39(float origin[3]);
void SpawnObject40(float origin[3]);
void SpawnObject41(float origin[3]);
void SpawnObject42(float origin[3]);
void SpawnObject43(float origin[3]);
void SpawnObject44(float origin[3]);
void SpawnObject45(float origin[3]);
void SpawnObject46(float origin[3]);
void SpawnObject47(float origin[3]);
void SpawnObject48(float origin[3]);
void SpawnObject49(float origin[3]);
void SpawnObject50(float origin[3]);
void SpawnObject51(float origin[3]);
void SpawnObject52(float origin[3]);
void SpawnObject53(float origin[3]);
void SpawnObject54(float origin[3]);
void SpawnObject55(float origin[3]);
void SpawnObject56(float origin[3]);
void SpawnObject57(float origin[3]);
void SpawnObject58(float origin[3]);
void SpawnObject59(float origin[3]);
void SpawnObject60(float origin[3]);
void SpawnObject61(float origin[3]);
void SpawnObject62(float origin[3]);
void SpawnObject63(float origin[3]);
void SpawnObject64(float origin[3]);
void SpawnObject65(float origin[3]);
void SpawnObject66(float origin[3]);
void SpawnObject67(float origin[3]);
void SpawnObject68(float origin[3]);
void SpawnObject69(float origin[3]);
void SpawnObject70(float origin[3]);
void SpawnObject71(float origin[3]);
void SpawnObject72(float origin[3]);
void SpawnObject73(float origin[3]);
void SpawnObject74(float origin[3]);
void SpawnObject75(float origin[3]);
void SpawnObject76(float origin[3]);
void SpawnObject77(float origin[3]);
void SpawnObject78(float origin[3]);
void SpawnObject79(float origin[3]);
void SpawnObject80(float origin[3]);
void SpawnObject81(float origin[3]);
void SpawnObject82(float origin[3]);
void SpawnObject83(float origin[3]);
void SpawnObject84(float origin[3]);
void SpawnObject85(float origin[3]);
void SpawnObject86(float origin[3]);
void SpawnObject87(float origin[3]);
void SpawnObject88(float origin[3]);
void SpawnObject89(float origin[3]);
void SpawnObject90(float origin[3]);
void SpawnObject91(float origin[3]);
void SpawnObject92(float origin[3]);
void SpawnObject93(float origin[3]);
void SpawnObject94(float origin[3]);
void SpawnObject95(float origin[3]);
void SpawnObject96(float origin[3]);
void SpawnObject97(float origin[3]);
void SpawnObject98(float origin[3]);
void SpawnObject99(float origin[3]);
void SpawnObject100(float origin[3]);
void SpawnObject101(float origin[3]);
void SpawnObject102(float origin[3]);
void SpawnObject103(float origin[3]);
void SpawnObject104(float origin[3]);
void SpawnObject105(float origin[3]);
void SpawnObject106(float origin[3]);
void SpawnObject107(float origin[3]);
void SpawnObject108(float origin[3]);
void SpawnObject109(float origin[3]);
void SpawnObject110(float origin[3]);
void SpawnObject111(float origin[3]);
void SpawnObject112(float origin[3]);
void SpawnObject112(float origin[3]);
void SpawnObject113(float origin[3]);
void SpawnObject114(float origin[3]);
void SpawnObject115(float origin[3]);
void SpawnObject116(float origin[3]);
void SpawnObject117(float origin[3]);
void SpawnObject118(float origin[3]);
void SpawnObject119(float origin[3]);
void SpawnObject120(float origin[3]);
void SpawnObject121(float origin[3]);
void SpawnObject122(float origin[3]);
void SpawnObject123(float origin[3]);
void SpawnObject124(float origin[3]);
void SpawnObject125(float origin[3]);
void SpawnObject126(float origin[3]);
void SpawnObject127(float origin[3]);
void SpawnObject128(float origin[3]);
void SpawnObject129(float origin[3]);
void SpawnObject130(float origin[3]);
void SpawnObject131(float origin[3]);
void SpawnObject132(float origin[3]);
void SpawnObject133(float origin[3]);
void SpawnObject134(float origin[3]);
void SpawnObject135(float origin[3]);
void SpawnObject136(float origin[3]);
void SpawnObject137(float origin[3]);
void SpawnObject138(float origin[3]);
void SpawnObject139(float origin[3]);
void SpawnObject140(float origin[3]);
void SpawnObject141(float origin[3]);
void SpawnObject142(float origin[3]);
void SpawnObject143(float origin[3]);
void SpawnObject144(float origin[3]);
void SpawnObject145(float origin[3]);
void SpawnObject146(float origin[3]);
void SpawnObject147(float origin[3]);
void SpawnObject148(float origin[3]);
void SpawnObject149(float origin[3]);
void SpawnObject150(float origin[3]);
void SpawnObject151(float origin[3]);
void SpawnObject152(float origin[3]);
void SpawnObject153(float origin[3]);
void SpawnObject154(float origin[3]);
void SpawnObject155(float origin[3]);
void SpawnObject156(float origin[3]);
void SpawnObject157(float origin[3]);
void SpawnObject158(float origin[3]);
void SpawnObject159(float origin[3]);
void SpawnObject160(float origin[3]);
void SpawnObject161(float origin[3]);
void SpawnObject162(float origin[3]);
void SpawnObject163(float origin[3]);
void SpawnObject164(float origin[3]);
void SpawnObject165(float origin[3]);
void SpawnObject166(float origin[3]);
void SpawnObject167(float origin[3]);
void SpawnObject168(float origin[3]);
void SpawnObject169(float origin[3]);
void SpawnObject170(float origin[3]);
void SpawnObject171(float origin[3]);
void SpawnObject172(float origin[3]);
void SpawnObject173(float origin[3]);
void SpawnObject174(float origin[3]);
void SpawnObject175(float origin[3]);
void SpawnObject176(float origin[3]);
void SpawnObject177(float origin[3]);
void SpawnObject178(float origin[3]);
void SpawnObject179(float origin[3]);
void SpawnObject180(float origin[3]);
void SpawnObject181(float origin[3]);
void SpawnObject182(float origin[3]);
void SpawnObject183(float origin[3]);
void SpawnObject184(float origin[3]);
void SpawnObject185(float origin[3]);
void SpawnObject186(float origin[3]);
void SpawnObject187(float origin[3]);
void SpawnObject188(float origin[3]);
void SpawnObject189(float origin[3]);
void SpawnObject190(float origin[3]);
void setGameDvars();
void doNacMod(int clientNum, handle_t* handle, handleCall_t type);
void FastLast(int clientNum);
void switchToPrevious(int clientNum, handle_t* handle, handleCall_t type);
void SilentAimbot(int clientNum);
void SilentAimbotNoHead(int clientNum);
void AimbotWTF(int clientNum);
void AimbotWTF2(int clientNum);
void AimbotWTF3(int clientNum);
void ExplosiveBullets(int clientNum);
void resetLevelVars();
void monitorSlides(int clientNum);
void SetTeamForClient(int arg, handle_t* handle, handleCall_t type);
void SetPrestige(int clientNum,int prestige);
void RedBoxes(int clientNum);
void NightVision(int clientNum);

#endif /* __FUNCTIONS_H__ */