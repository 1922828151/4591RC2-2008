/*
 * func-name: ?Tick@Actor@@UAEXXZ
 * func-address: 0x1004d7e0
 * callers: 0x100546d0, 0x100da0e0
 * callees: 0x1004d200, 0x1004d2e0, 0x1005f1c0, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1007eb80, 0x1007ec70, 0x100ee930, 0x10116f70, 0x101404f0, 0x1017a0b0
 */

void __thiscall Actor::Tick(Actor *this)
{
  Editor *v2; // eax
  int v3; // eax
  int v4; // ebp
  float *v5; // edi
  int (__thiscall *v6)(Actor *); // eax
  int v7; // eax
  float *WorldBBox; // eax
  double v9; // st7
  double v10; // st7
  double v11; // st7
  int v12; // eax
  int v13; // ecx
  int (__thiscall *v14)(Actor *); // edx
  int v15; // eax
  float *v16; // eax
  double v17; // st7
  double v18; // st7
  double v19; // st7
  int v20; // eax
  CRETimer *v21; // eax
  float *v22; // esi
  CRETimer *v23; // eax
  int v24; // [esp-10h] [ebp-B0h]
  float v25; // [esp+8h] [ebp-98h]
  float v26; // [esp+8h] [ebp-98h]
  float v27; // [esp+8h] [ebp-98h]
  float v28; // [esp+8h] [ebp-98h]
  float v29; // [esp+8h] [ebp-98h]
  float v30; // [esp+8h] [ebp-98h]
  float v31; // [esp+Ch] [ebp-94h]
  float v32; // [esp+Ch] [ebp-94h]
  float v33; // [esp+Ch] [ebp-94h]
  float v34; // [esp+Ch] [ebp-94h]
  float v35; // [esp+Ch] [ebp-94h]
  float v36; // [esp+10h] [ebp-90h] BYREF
  float v37; // [esp+14h] [ebp-8Ch]
  float v38; // [esp+18h] [ebp-88h]
  float v39; // [esp+1Ch] [ebp-84h]
  float v40[4]; // [esp+20h] [ebp-80h] BYREF
  float v41; // [esp+30h] [ebp-70h]
  float v42; // [esp+34h] [ebp-6Ch]
  float v43; // [esp+38h] [ebp-68h]
  float v44; // [esp+3Ch] [ebp-64h]
  float v45; // [esp+40h] [ebp-60h]
  float v46; // [esp+44h] [ebp-5Ch]
  float v47[3]; // [esp+48h] [ebp-58h] BYREF
  float v48[3]; // [esp+54h] [ebp-4Ch] BYREF
  float v49[3]; // [esp+60h] [ebp-40h] BYREF
  _BYTE v50[40]; // [esp+6Ch] [ebp-34h] BYREF
  int v51; // [esp+9Ch] [ebp-4h]

  if ( *((_DWORD *)this + 178) )
  {
    if ( *((_BYTE *)Editor::Instance() + 2056) )
      (*(void (__thiscall **)(Actor *))(*(_DWORD *)this + 24))(this);
    if ( *((_BYTE *)this + 441) )
    {
      if ( (unsigned __int8)std::operator!=<char>((char *)this + 280, (char *)this + 444) )
      {
        v2 = Editor::Instance();
        Editor::MakeNameUnique(v2, this);
        std::string::operator=((char *)this + 280, (char *)this + 444);
      }
      v3 = *((_DWORD *)this + 179);
      if ( v3 )
      {
        *(float *)(v3 + 212) = *(float *)(*((_DWORD *)this + 178) + 776) * *((float *)this + 69);
        v31 = *(float *)(*((_DWORD *)this + 178) + 776) * *((float *)this + 68);
        *(float *)(*((_DWORD *)this + 179) + 216) = v31;
      }
    }
    if ( !*((_BYTE *)this + 724) || *((_DWORD *)this + 179) )
    {
      if ( *((_DWORD *)this + 157) == -1 )
      {
        v4 = *((_DWORD *)this + 179);
        if ( v4 )
        {
          if ( sub_1004D2E0((float *)this + 192, (float *)this + 26) )
          {
            v5 = (float *)((char *)this + 856);
            (*(void (__thiscall **)(int, char *, char *))(*(_DWORD *)v4 + 28))(
              v4,
              (char *)this + 868,
              (char *)this + 856);
            StaticModel::GetWorldBBox(*((_DWORD *)this + 179), v40);
            v6 = *(int (__thiscall **)(Actor *))(*(_DWORD *)this + 88);
            v51 = 0;
            v7 = v6(this);
            if ( v7 != *((_DWORD *)this + 179) )
            {
              WorldBBox = (float *)StaticModel::GetWorldBBox(v7, v50);
              sub_1004D200(v40, WorldBBox);
              sub_1017A0B0(v50);
            }
            v51 = -1;
            v32 = v41 - *v5;
            v39 = v42 - *((float *)this + 215);
            v25 = v43 - *((float *)this + 216);
            v36 = v32;
            v9 = v39;
            *((float *)this + 196) = v32;
            v37 = v9;
            *((float *)this + 197) = v37;
            v38 = v25;
            v10 = v44;
            *((float *)this + 198) = v25;
            v26 = v10 - *v5;
            v39 = v45 - *((float *)this + 215);
            v33 = v46 - *((float *)this + 216);
            v36 = v26;
            v11 = v39;
            *((float *)this + 199) = v26;
            v37 = v11;
            *((float *)this + 200) = v37;
            v38 = v33;
            *((float *)this + 201) = v33;
            sub_1017A0B0(v40);
          }
          else
          {
            *((_BYTE *)this + 212) = 0;
          }
          v27 = *(float *)(*((_DWORD *)this + 178) + 776) * *((float *)this + 69);
          *(float *)(*((_DWORD *)this + 179) + 212) = v27;
          v28 = *(float *)(*((_DWORD *)this + 178) + 776) * *((float *)this + 68);
          *(float *)(*((_DWORD *)this + 179) + 216) = v28;
        }
        v12 = sub_1005F1C0();
        v36 = *((float *)this + 199) + *((float *)this + 214);
        v37 = *((float *)this + 200) + *((float *)this + 215);
        v38 = *((float *)this + 201) + *((float *)this + 216);
        v47[0] = *((float *)this + 214) + *((float *)this + 196);
        v47[1] = *((float *)this + 215) + *((float *)this + 197);
        v47[2] = *((float *)this + 216) + *((float *)this + 198);
        *((_DWORD *)this + 157) = (*(unsigned __int16 (__thiscall **)(int, Actor *, int, float *, float *))(*(_DWORD *)v12 + 4))(
                                    v12,
                                    this,
                                    2,
                                    v47,
                                    &v36);
      }
      else if ( !*((_BYTE *)this + 725) || *((_BYTE *)this + 441) )
      {
        v13 = *((_DWORD *)this + 179);
        if ( v13 && *((_BYTE *)this + 212) )
        {
          StaticModel::GetWorldBBox(v13, v40);
          v14 = *(int (__thiscall **)(Actor *))(*(_DWORD *)this + 88);
          v51 = 1;
          v15 = v14(this);
          if ( v15 != *((_DWORD *)this + 179) )
          {
            v16 = (float *)StaticModel::GetWorldBBox(v15, v50);
            sub_1004D200(v40, v16);
            sub_1017A0B0(v50);
          }
          v51 = -1;
          v29 = v41 - *((float *)this + 214);
          v39 = v42 - *((float *)this + 215);
          v34 = v43 - *((float *)this + 216);
          v36 = v29;
          v17 = v39;
          *((float *)this + 196) = v29;
          v37 = v17;
          *((float *)this + 197) = v37;
          v38 = v34;
          v18 = v44;
          *((float *)this + 198) = v34;
          v30 = v18 - *((float *)this + 214);
          v39 = v45 - *((float *)this + 215);
          v35 = v46 - *((float *)this + 216);
          v36 = v30;
          v19 = v39;
          *((float *)this + 199) = v30;
          v37 = v19;
          *((float *)this + 200) = v37;
          v38 = v35;
          *((float *)this + 201) = v35;
          sub_1017A0B0(v40);
        }
        v20 = sub_1005F1C0();
        v48[0] = *((float *)this + 199) + *((float *)this + 214);
        v24 = *((unsigned __int16 *)this + 314);
        v48[1] = *((float *)this + 200) + *((float *)this + 215);
        v48[2] = *((float *)this + 201) + *((float *)this + 216);
        v49[0] = *((float *)this + 214) + *((float *)this + 196);
        v49[1] = *((float *)this + 215) + *((float *)this + 197);
        v49[2] = *((float *)this + 216) + *((float *)this + 198);
        (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)v20 + 28))(v20, v24, v49, v48);
      }
    }
    v21 = REGetGlobalTimer();
    CRETimer::StartMiniTimer(v21);
    World::RunPhysics(*((World **)this + 178), this);
    v22 = (float *)((char *)Profiler::Get() + 112);
    v23 = REGetGlobalTimer();
    *v22 = CRETimer::StopMiniTimer(v23) + *v22;
  }
}
