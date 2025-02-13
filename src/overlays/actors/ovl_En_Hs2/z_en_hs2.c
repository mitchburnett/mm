/*
 * File: z_en_hs2.c
 * Overlay: ovl_En_Hs2
 * Description: Near-empty actor. Does nothing, but can be targeted.
 */

#include "z_en_hs2.h"

#define FLAGS (ACTOR_FLAG_1 | ACTOR_FLAG_8)

#define THIS ((EnHs2*)thisx)

void EnHs2_Init(Actor* thisx, PlayState* play);
void EnHs2_Destroy(Actor* thisx, PlayState* play);
void EnHs2_Update(Actor* thisx, PlayState* play);
void EnHs2_Draw(Actor* thisx, PlayState* play);

void EnHs2_DoNothing(EnHs2* this, PlayState* play);

ActorInit En_Hs2_InitVars = {
    ACTOR_EN_HS2,
    ACTORCAT_NPC,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnHs2),
    (ActorFunc)EnHs2_Init,
    (ActorFunc)EnHs2_Destroy,
    (ActorFunc)EnHs2_Update,
    (ActorFunc)EnHs2_Draw,
};

void EnHs2_Init(Actor* thisx, PlayState* play) {
    EnHs2* this = THIS;

    Actor_SetScale(&this->actor, 1.0f);
    this->actionFunc = EnHs2_DoNothing;
}

void EnHs2_Destroy(Actor* thisx, PlayState* play) {
}

void EnHs2_DoNothing(EnHs2* this, PlayState* play) {
}

void EnHs2_Update(Actor* thisx, PlayState* play) {
    EnHs2* this = THIS;

    this->actionFunc(this, play);
}

void EnHs2_Draw(Actor* thisx, PlayState* play) {
}
