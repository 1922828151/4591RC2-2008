/*
 * func-name: ?PostRender@Effect_LightDizzy@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1008a2d0
 * callers: 0x10019f29
 * callees: 0x10005646, 0x10014669, 0x102c1be0, 0x102c953a, 0x102c9dbc
 */

void __thiscall Effect_LightDizzy::PostRender(Effect_LightDizzy *this, struct Camera *a2)
{
  struct Camera *v3; // ebx
  int v4; // eax
  int v5; // eax
  double v6; // st7
  double v7; // st6
  int v8; // eax
  double v9; // st6
  double v10; // st7
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // [esp+40h] [ebp-138h]
  int v17; // [esp+44h] [ebp-134h]
  int v18; // [esp+48h] [ebp-130h]
  float v19; // [esp+60h] [ebp-118h]
  float v20; // [esp+60h] [ebp-118h]
  float v21; // [esp+60h] [ebp-118h]
  float v22; // [esp+64h] [ebp-114h]
  float v23; // [esp+64h] [ebp-114h]
  float v24; // [esp+64h] [ebp-114h]
  float v25; // [esp+68h] [ebp-110h]
  float v26; // [esp+68h] [ebp-110h]
  float v27; // [esp+68h] [ebp-110h]
  _DWORD *v28; // [esp+6Ch] [ebp-10Ch]
  int v29; // [esp+70h] [ebp-108h]
  float v30; // [esp+94h] [ebp-E4h] BYREF
  float v31; // [esp+98h] [ebp-E0h]
  float v32; // [esp+9Ch] [ebp-DCh]
  float v33[2]; // [esp+A0h] [ebp-D8h] BYREF
  float v34; // [esp+A8h] [ebp-D0h]
  _DWORD v35[2]; // [esp+ACh] [ebp-CCh] BYREF
  unsigned int v36; // [esp+B4h] [ebp-C4h]
  unsigned int v37; // [esp+B8h] [ebp-C0h]
  float v38; // [esp+BCh] [ebp-BCh]
  float v39; // [esp+C0h] [ebp-B8h]
  _BYTE v40[64]; // [esp+C4h] [ebp-B4h] BYREF
  _BYTE v41[104]; // [esp+104h] [ebp-74h] BYREF
  int v42; // [esp+174h] [ebp-4h]

  v3 = a2;
  if ( *((_DWORD *)this + 281) )
  {
    if ( !*((_BYTE *)this + 816) )
    {
      if ( *((_DWORD *)this + 178) )
      {
        v22 = *((float *)this + 214) - *((float *)a2 + 88);
        v25 = *((float *)this + 215) - *((float *)a2 + 89);
        v19 = *((float *)this + 216) - *((float *)a2 + 90);
        v26 = v25 * v25 + v22 * v22 + v19 * v19;
        v27 = sqrt(v26);
        v20 = 0.0;
        v23 = 0.0;
        if ( *((float *)this + 68) > (double)v27 )
        {
          v4 = RenderDevice::Instance();
          v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 300))(v4);
          v5 = RenderDevice::Instance();
          v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 296))(v5);
          v39 = *(float *)(RenderDevice::Instance() + 1620);
          v38 = *(float *)(RenderDevice::Instance() + 1624);
          v35[0] = 0;
          v35[1] = 0;
          sub_10014669(v40);
          v30 = 0.0;
          v31 = 0.0;
          v32 = 0.0;
          D3DXVec3Project(&v30, (char *)this + 856, v35, (char *)a2 + 156, (char *)a2 + 220, v40);
          v33[0] = 0.0;
          v33[1] = 0.0;
          v34 = 0.0;
          sub_102C1BE0((char *)this + 856, v33);
          if ( v34 > 0.0 )
          {
            v6 = -*((float *)this + 282) * 0.5;
            if ( v30 > v6 )
            {
              v7 = 0.5 * *((float *)this + 282);
              if ( (double)v36 + v7 > v30 && v31 > v6 && v7 + (double)v37 > v31 )
              {
                CollisionInfo::CollisionInfo((CollisionInfo *)v41);
                v42 = 0;
                v8 = NxPhysics::Instance((char *)a2 + 352, (char *)this + 856, 1, v41, -49);
                if ( (unsigned __int8)NxPhysics::RayCast(v8) )
                  v20 = -GDeltaTime / *((float *)this + 277);
                else
                  v23 = GDeltaTime / *((float *)this + 278);
                v24 = v20 + 0.0 + v23 + *((float *)this + 292);
                *((float *)this + 292) = v24;
                if ( v24 <= 1.0 )
                {
                  v9 = 0.0;
                  if ( v24 < 0.0 )
                    *((float *)this + 292) = 0.0;
                }
                else
                {
                  *((float *)this + 292) = 1.0;
                  v9 = 0.0;
                }
                if ( v9 < *((float *)this + 292) )
                {
                  if ( *((float *)this + 279) <= (double)v27 )
                    v10 = *((float *)this + 280);
                  else
                    v10 = (1.0 - (*((float *)this + 279) - v27) / *((float *)this + 279)) * *((float *)this + 280);
                  v21 = v10 + *((float *)this + 282);
                  v11 = RenderDevice::Instance();
                  v29 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 432))(v11, 7, 0);
                  v12 = (_DWORD *)Canvas::Instance();
                  v13 = *v12;
                  v18 = *((_DWORD *)this + 288);
                  v28 = v12;
                  v17 = *((_DWORD *)this + 287);
                  v16 = *((_DWORD *)this + 281);
                  v14 = sub_10005646();
                  (*(void (__thiscall **)(_DWORD *, char *, _DWORD, _DWORD, int, int, int, int))(v13 + 124))(
                    v28,
                    (char *)this + 856,
                    LODWORD(v21),
                    LODWORD(v21),
                    v14,
                    v16,
                    v17,
                    v18);
                  v15 = RenderDevice::Instance();
                  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v15 + 432))(v15, 7, v29);
                  v3 = a2;
                }
                v42 = -1;
                CollisionInfo::~CollisionInfo((CollisionInfo *)v41);
              }
            }
          }
        }
      }
    }
  }
  Actor::PostRender(this, v3);
}
