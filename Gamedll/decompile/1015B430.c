/*
 * func-name: ?UpdateHUD@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x1015b430
 * callers: 0x10005560
 * callees: 0x10001dfc, 0x10002e37, 0x10003f58, 0x10009efd, 0x1000a097, 0x10014e43, 0x100174e0
 */

void __thiscall GameClient::Equip::UpdateHUD(GameClient::Equip *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  CameraHandler *v5; // eax
  struct Camera *Camera; // eax
  float v7; // edx
  CameraHandler *v8; // eax
  struct Camera *v9; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  int v13; // edx
  int v14; // eax
  double (__thiscall *v15)(GameClient::Equip *); // edx
  double v16; // st7
  int v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // al
  int v21; // edx
  int *v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  float v30; // [esp+18h] [ebp-B4h]
  float v31; // [esp+18h] [ebp-B4h]
  float v32; // [esp+18h] [ebp-B4h]
  float v33; // [esp+18h] [ebp-B4h]
  float v34; // [esp+18h] [ebp-B4h]
  int v35; // [esp+1Ch] [ebp-B0h] BYREF
  int v36; // [esp+20h] [ebp-ACh]
  float v37; // [esp+24h] [ebp-A8h] BYREF
  float v38; // [esp+28h] [ebp-A4h]
  float v39; // [esp+2Ch] [ebp-A0h]
  float v40; // [esp+30h] [ebp-9Ch]
  float v41; // [esp+34h] [ebp-98h]
  float v42; // [esp+38h] [ebp-94h]
  int v43[4]; // [esp+3Ch] [ebp-90h] BYREF
  float v44[3]; // [esp+4Ch] [ebp-80h] BYREF
  _BYTE v45[8]; // [esp+58h] [ebp-74h] BYREF
  double v46; // [esp+60h] [ebp-6Ch]
  int v47; // [esp+A4h] [ebp-28h]
  int v48; // [esp+C8h] [ebp-4h]

  v2 = *((_DWORD *)this + 44);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 37);
    if ( v3 && *(_BYTE *)(v3 + 700) )
    {
      if ( (*(_DWORD *)(v3 + 368) & 0x20) != 0 )
        *(_BYTE *)(v2 + 4) = *((_BYTE *)this + 185) != 0;
      else
        *(_BYTE *)(v2 + 4) = *(GameClient::Equip **)(v3 + 228) == this && *(_DWORD *)(v3 + 364) <= 1u;
      if ( *(_BYTE *)(*((_DWORD *)this + 44) + 4) )
      {
        v4 = -926365496;
        v5 = CameraHandler::Instance();
        Camera = CameraHandler::GetCamera(v5, 0);
        v7 = *((float *)Camera + 88);
        Camera = (struct Camera *)((char *)Camera + 352);
        v37 = v7;
        v38 = *((float *)Camera + 1);
        v39 = *((float *)Camera + 2);
        v8 = CameraHandler::Instance();
        v9 = CameraHandler::GetCamera(v8, 0);
        v10 = *((float *)v9 + 94);
        v11 = *((float *)v9 + 95);
        v12 = *((float *)v9 + 96);
        v40 = v10;
        v41 = v11;
        v42 = v12;
        memset(&v43[1], 0, 12);
        v13 = *(int *)(*((_DWORD *)this + 37) + 12);
        v48 = 0;
        v35 = v13;
        sub_10002E37(v43, (int)&v35);
        v14 = *((_DWORD *)this + 67);
        if ( v14 )
        {
          v35 = *(int *)(v14 + 12);
          sub_10002E37(v43, (int)&v35);
        }
        CollisionInfo::CollisionInfo((CollisionInfo *)v45);
        v15 = *(double (__thiscall **)(GameClient::Equip *))(*(_DWORD *)this + 192);
        LOBYTE(v48) = 1;
        *(float *)&v35 = v15(this);
        v16 = *(float *)&v35;
        *(float *)&v35 = v40 * *(float *)&v35;
        *(float *)&v36 = v41 * v16;
        v30 = v16 * v42;
        *(float *)&v35 = v37 + *(float *)&v35;
        *(float *)&v36 = v38 + *(float *)&v36;
        v31 = v39 + v30;
        v44[0] = *(float *)&v35;
        v44[1] = *(float *)&v36;
        v44[2] = v31;
        v17 = NxPhysics::Instance(v43, &v37, v44, 3, v45);
        if ( (unsigned __int8)NxPhysics::RayCast(v17) )
        {
          if ( v47 == -1 )
          {
            *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 37) + 1488) + 9) = 0;
          }
          else
          {
            *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 37) + 1488) + 9) = 1;
            v18 = sub_10001DFC(v47);
            if ( v18 && (v19 = *(_DWORD *)(v18 + 108)) != 0 )
            {
              if ( v19 == 1 )
                v4 = -926365696;
              else
                v4 = *(_DWORD *)(*((_DWORD *)this + 37) + 108) != v19 ? -926416896 : -939472896;
            }
            else
            {
              v4 = -926365496;
            }
          }
          v32 = v46;
          *(float *)(*(_DWORD *)(*((_DWORD *)this + 37) + 1488) + 16) = v32;
        }
        else
        {
          *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 37) + 1488) + 9) = 0;
          *(float *)(*(_DWORD *)(*((_DWORD *)this + 37) + 1488) + 16) = -1.0;
          v4 = -926365496;
        }
        *(_DWORD *)(*((_DWORD *)this + 44) + 24) = v4;
        *(_BYTE *)(*((_DWORD *)this + 44) + 6) = *(int *)(*((_DWORD *)this + 37) + 660) > 1;
        v20 = sub_10009EFD();
        v21 = *((_DWORD *)this + 44);
        if ( v20 )
        {
          *(_BYTE *)(v21 + 5) = 0;
        }
        else
        {
          *(_BYTE *)(v21 + 5) = 1;
          v22 = (int *)sub_10014E43(0);
          v23 = sub_10001DFC(*v22);
          if ( v23 )
          {
            v24 = *(_DWORD *)(v23 + 24);
            v25 = v23 + 24;
            v26 = (_DWORD *)(*((_DWORD *)this + 44) + 44);
            *v26 = v24;
            v26[1] = *(_DWORD *)(v25 + 4);
            v26[2] = *(_DWORD *)(v25 + 8);
          }
        }
        LOBYTE(v48) = 0;
        CollisionInfo::~CollisionInfo((CollisionInfo *)v45);
        sub_100174E0();
      }
    }
    else
    {
      *(_BYTE *)(v2 + 4) = 0;
    }
    v27 = *((_DWORD *)this + 37);
    if ( v27 && (*(GameClient::Equip **)(v27 + 228) == this || *((_DWORD *)this + 67)) )
    {
      v28 = *((_DWORD *)this + 2);
      v36 = *(int *)(v28 + 320);
      if ( v36 <= 0 )
      {
        *(float *)(*((_DWORD *)this + 44) + 56) = -1.0;
      }
      else
      {
        v33 = *((float *)this + 48) / *(float *)(v28 + 324) * (double)*(int *)(v28 + 328) + *((float *)this + 47);
        v34 = v33 / (double)v36;
        *(float *)(*((_DWORD *)this + 44) + 56) = v34;
        v29 = *((_DWORD *)this + 44);
        if ( *(float *)(v29 + 56) > 1.0 )
          *(float *)(v29 + 56) = 1.0;
      }
    }
  }
}
