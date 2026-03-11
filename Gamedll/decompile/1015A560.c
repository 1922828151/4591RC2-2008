/*
 * func-name: ?UpdateFPV@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x1015a560
 * callers: 0x1000a042
 * callees: 0x10006a19, 0x10008062, 0x10009e03, 0x1000bf05, 0x1000c789, 0x1000f17d, 0x10010519, 0x10012c79, 0x1001371e, 0x10014669, 0x100157a8, 0x100163b0, 0x10018aca, 0x102c23d0
 */

void __thiscall GameClient::Equip::UpdateFPV(GameClient::Equip *this)
{
  GameClient::WorldObject *v2; // ecx
  int v3; // eax
  float v4; // esi
  bool v5; // zf
  int v6; // ecx
  int (__thiscall *v7)(int, _BYTE *, _DWORD *, int); // edx
  char v8; // bl
  const void *v9; // esi
  void (__thiscall *v10)(GameClient::Equip *, _DWORD *); // edx
  float *v11; // ecx
  const struct Vector *EyesLocation; // eax
  float v13; // ecx
  float v14; // edx
  float v15; // eax
  float *v16; // eax
  int v17; // eax
  unsigned int i; // ebx
  int v19; // eax
  unsigned __int8 (__thiscall **v20)(_DWORD, int, _BYTE *, _DWORD); // esi
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int (__thiscall *v28)(int, int, _BYTE *, _DWORD); // eax
  char v29; // bl
  int v30; // [esp-Ch] [ebp-1D8h]
  float v31; // [esp+14h] [ebp-1B8h]
  int j; // [esp+14h] [ebp-1B8h]
  float v33[4]; // [esp+18h] [ebp-1B4h] BYREF
  float v34; // [esp+28h] [ebp-1A4h]
  float v35; // [esp+2Ch] [ebp-1A0h]
  float v36; // [esp+30h] [ebp-19Ch]
  float v37; // [esp+34h] [ebp-198h]
  float v38; // [esp+38h] [ebp-194h]
  _DWORD v39[16]; // [esp+3Ch] [ebp-190h] BYREF
  _BYTE v40[28]; // [esp+7Ch] [ebp-150h] BYREF
  _BYTE v41[12]; // [esp+98h] [ebp-134h] BYREF
  _BYTE v42[28]; // [esp+A4h] [ebp-128h] BYREF
  _BYTE v43[48]; // [esp+C0h] [ebp-10Ch] BYREF
  _BYTE v44[16]; // [esp+F0h] [ebp-DCh] BYREF
  _BYTE v45[48]; // [esp+100h] [ebp-CCh] BYREF
  _BYTE v46[16]; // [esp+130h] [ebp-9Ch] BYREF
  _BYTE v47[64]; // [esp+140h] [ebp-8Ch] BYREF
  _BYTE v48[64]; // [esp+180h] [ebp-4Ch] BYREF
  int v49; // [esp+1C8h] [ebp-4h]

  v2 = (GameClient::WorldObject *)*((_DWORD *)this + 37);
  if ( v2 )
  {
    if ( *((_BYTE *)v2 + 700) )
    {
      if ( GameClient::WorldObject::IsLocal(v2) )
      {
        v3 = *((_DWORD *)this + 37);
        v4 = *((float *)this + 2);
        v5 = (*(_DWORD *)(v3 + 368) & 0x20) == 0;
        v33[3] = v4;
        if ( v5 )
        {
          if ( *(GameClient::Equip **)(v3 + 228) == this )
          {
            if ( *(_DWORD *)(LODWORD(v4) + 308) == 3 )
            {
              sub_1001371E(v3 + 588);
              EyesLocation = GameClient::Robot::GetEyesLocation(*((GameClient::Robot **)this + 37));
              v13 = *(float *)EyesLocation;
              v14 = *((float *)EyesLocation + 1);
              v15 = *((float *)EyesLocation + 2);
              v34 = v13;
              v35 = v14;
              v36 = v15;
              sub_102C23D0(v47);
              v16 = (float *)sub_10009E03((int)v41, LODWORD(v4) + 340);
              v31 = *v16 + v34;
              v38 = v16[1] + v35;
              v37 = v16[2] + v36;
              v33[0] = v31;
              *(float *)&v39[12] = v31;
              v17 = *(_DWORD *)this;
              v33[1] = v38;
              *(float *)&v39[13] = v38;
              v33[2] = v37;
              *(float *)&v39[14] = v37;
              (*(void (__thiscall **)(GameClient::Equip *, _DWORD *))(v17 + 40))(this, v39);
              v11 = v33;
              goto LABEL_10;
            }
            sub_10014669(v39);
            std::string::string(v40, "FPVWeaponPoint");
            v6 = *((_DWORD *)this + 45);
            v7 = *(int (__thiscall **)(int, _BYTE *, _DWORD *, int))(*(_DWORD *)v6 + 120);
            v49 = 0;
            v8 = v7(v6, v40, v39, 1);
            v49 = -1;
            std::string::~string(v40);
            if ( v8 )
            {
              sub_10008062((int)v47);
              v9 = (const void *)sub_10018ACA(v48, (int)this + 36);
              v10 = *(void (__thiscall **)(GameClient::Equip *, _DWORD *))(*(_DWORD *)this + 40);
              qmemcpy(v39, v9, sizeof(v39));
              v10(this, v39);
              v11 = (float *)&v39[12];
LABEL_10:
              (*(void (__thiscall **)(GameClient::Equip *, float *))(*(_DWORD *)this + 36))(this, v11);
            }
          }
          GameClient::AEquip::UpdateTransformFPV(*((GameClient::AEquip **)this + 45));
          sub_10014669(v45);
          for ( i = 0; ; ++i )
          {
            while ( 1 )
            {
              v19 = *((_DWORD *)this + 74);
              if ( !v19 || i >= (*((_DWORD *)this + 75) - v19) / 148 )
              {
                v22 = 0;
                for ( j = 0; ; j += 120 )
                {
LABEL_21:
                  v23 = *((_DWORD *)this + 82);
                  if ( !v23 || v22 >= (*((_DWORD *)this + 83) - v23) / 120 )
                    return;
                  v24 = *((_DWORD *)this + 82);
                  if ( !v24 || v22 >= (*((_DWORD *)this + 83) - v24) / 120 )
                    _invalid_parameter_noinfo();
                  if ( !sub_1000BF05() || !(unsigned __int8)sub_100163B0() )
                    goto LABEL_31;
                  sub_10014669(v43);
                  v25 = sub_1000C789(v22);
                  v26 = std::operator+<char>(v42, v25, "FPV");
                  v27 = *((_DWORD *)this + 45);
                  v30 = v26;
                  v28 = *(int (__thiscall **)(int, int, _BYTE *, _DWORD))(*(_DWORD *)v27 + 120);
                  v49 = 1;
                  v29 = v28(v27, v30, v43, 0);
                  v49 = -1;
                  std::string::~string(v42);
                  if ( !v29 )
                    break;
                  sub_10010519((int)v43, (int)v44);
                  ++v22;
                }
                sub_10010519((int)this + 36, (int)this + 24);
LABEL_31:
                ++v22;
                j += 120;
                goto LABEL_21;
              }
              sub_100157A8(i);
              if ( sub_1000BF05() )
              {
                if ( (unsigned __int8)sub_100163B0() )
                  break;
              }
LABEL_19:
              ++i;
            }
            v20 = (unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 45) + 120);
            v21 = sub_100157A8(i);
            if ( !(*v20)(*((_DWORD *)this + 45), v21, v45, 0) )
            {
              sub_10010519((int)this + 36, (int)this + 24);
              goto LABEL_19;
            }
            sub_10010519((int)v45, (int)v46);
          }
        }
      }
    }
  }
}
