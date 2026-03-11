/*
 * func-name: sub_100C36B0
 * func-address: 0x100c36b0
 * callers: 0x1000c469
 * callees: 0x100015aa, 0x1000f1dc, 0x1000f9ca, 0x10016289, 0x102c0750, 0x102ca0a0
 */

void __thiscall sub_100C36B0(float *this)
{
  float *v1; // esi
  int v2; // ecx
  char v3; // al
  World *v4; // ecx
  float *v5; // esi
  int v6; // ebp
  char *v7; // eax
  int v8; // edi
  char *v9; // esi
  int v10; // eax
  DWORD v11; // eax
  DWORD TickCount; // [esp+18h] [ebp-1D564h]
  _BYTE v14[16]; // [esp+20h] [ebp-1D55Ch] BYREF
  float v15; // [esp+30h] [ebp-1D54Ch]
  float v16; // [esp+34h] [ebp-1D548h]
  float v17; // [esp+38h] [ebp-1D544h]
  float v18; // [esp+3Ch] [ebp-1D540h]
  float v19; // [esp+40h] [ebp-1D53Ch]
  float v20; // [esp+44h] [ebp-1D538h]
  _BYTE v21[104]; // [esp+48h] [ebp-1D534h] BYREF
  char v22[4]; // [esp+B0h] [ebp-1D4CCh] BYREF
  char v23; // [esp+B4h] [ebp-1D4C8h] BYREF
  int v24; // [esp+1D578h] [ebp-4h]

  v1 = this;
  v2 = *((_DWORD *)this + 263);
  if ( v2 )
  {
    *(float *)(v2 + 284) = v1[287];
    *(float *)(v2 + 208) = v1[273];
    v3 = *((_BYTE *)v1 + 1161);
    *(_BYTE *)(v2 + 265) = v3;
    if ( v3 )
      SurfaceDecal::UpdateProjectionPolys((SurfaceDecal *)v2);
    if ( *((_BYTE *)v1 + 1144) )
    {
      sub_1000F1DC();
      v4 = (World *)*((_DWORD *)v1 + 178);
      v24 = 0;
      World::GetWorldBBox(v4, (struct BBox *)v14);
      sub_10016289((int)v22, 12, 10000, (int)sub_1001AAFF);
      v5 = (float *)&v23;
      v6 = 10000;
      do
      {
        *(v5 - 1) = v15 + (v18 - v15) * ((double)rand() / 32767.0);
        *v5 = v16 + (v19 - v16) * ((double)rand() / 32767.0);
        v5 += 3;
        --v6;
        *(v5 - 2) = v17 + (v20 - v17) * ((double)rand() / 32767.0);
      }
      while ( v6 );
      TickCount = GetTickCount();
      CollisionInfo::CollisionInfo((CollisionInfo *)v21);
      LOBYTE(v24) = 1;
      v7 = v22;
      v8 = 9999;
      do
      {
        v9 = v7 + 12;
        v10 = NxPhysics::Instance(v7, v7 + 12, 1, v21, -1);
        NxPhysics::RayCast(v10);
        --v8;
        v7 = v9;
      }
      while ( v8 );
      v11 = GetTickCount();
      LogPrintf("RayCast : %d", v11 - TickCount);
      LOBYTE(v24) = 0;
      CollisionInfo::~CollisionInfo((CollisionInfo *)v21);
      v24 = -1;
      sub_102C0750(v14);
      v1 = this;
    }
    Effect_Base::RefreshOptions((Effect_Base *)v1);
  }
}
