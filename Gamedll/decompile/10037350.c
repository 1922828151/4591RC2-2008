/*
 * func-name: sub_10037350
 * func-address: 0x10037350
 * callers: 0x10005312
 * callees: 0x10001dfc, 0x10002f0e, 0x10006947, 0x1000a506, 0x1000a984, 0x1000c3d8, 0x10016a27, 0x102c9d50, 0x102c9ea8
 */

void __thiscall sub_10037350(void *this, _DWORD *a2)
{
  bool v3; // zf
  void *v4; // eax
  float v5; // ecx
  int *v6; // edi
  int v7; // eax
  float *v8; // eax
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  GameClient::FuncManager *v13; // eax
  struct GameClient::Function *Function; // eax
  struct GameClient::Function *v15; // ebx
  int v16; // eax
  float v17; // edx
  float v18; // eax
  int v19; // ecx
  float v20; // edx
  double v21; // st7
  int v22; // eax
  int v23; // eax
  unsigned int v24; // [esp-4h] [ebp-4Ch]
  float v25; // [esp+14h] [ebp-34h] BYREF
  float v26; // [esp+18h] [ebp-30h]
  float v27; // [esp+1Ch] [ebp-2Ch]
  float v28; // [esp+20h] [ebp-28h]
  int v29; // [esp+24h] [ebp-24h]
  float v30; // [esp+28h] [ebp-20h]
  float v31; // [esp+2Ch] [ebp-1Ch] BYREF
  void *v32; // [esp+30h] [ebp-18h]
  float v33; // [esp+34h] [ebp-14h]
  int v34; // [esp+38h] [ebp-10h]
  int v35; // [esp+44h] [ebp-4h]

  if ( *(float *)this > (double)*((float *)this + 7) )
  {
    *((float *)this + 7) = GDeltaTime + *((float *)this + 7);
    return;
  }
  if ( *((float *)this + 12) <= (double)*((float *)this + 13) )
  {
    *((float *)this + 13) = 0.0;
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    *((float *)this + 13) = *((float *)this + 13) + GDeltaTime;
  }
  v3 = *((_DWORD *)this + 2) == 1;
  *((float *)this + 7) = 0.0;
  if ( v3 )
  {
    *(float *)&v32 = 0.0;
    v33 = 0.0;
    v34 = 0;
    v35 = 0;
    GameClient::FuncManager::Instance();
    GameClient::FuncManager::GetFunctionByType(2, (int)&v31);
    v4 = v32;
    if ( *(float *)&v32 != 0.0 )
    {
      v5 = v33;
      if ( (LODWORD(v33) - (int)v32) >> 2 )
      {
        v6 = (int *)v32;
        if ( (unsigned int)v32 > LODWORD(v33) )
        {
          _invalid_parameter_noinfo();
          v5 = v33;
        }
        if ( (unsigned int)v6 >= LODWORD(v5) )
          _invalid_parameter_noinfo();
        v7 = *v6;
        if ( !*v6 )
        {
          sub_10002F0E();
          return;
        }
        *((_DWORD *)this + 8) = *(_DWORD *)(v7 + 32);
        v8 = *(float **)(v7 + 28);
        v25 = v8[6];
        v26 = v8[7];
        v9 = v8[8];
        v26 = 0.0;
        v27 = v9;
        v10 = a2[90];
        if ( v10 == 2 || v10 == 1 )
          (*(void (__thiscall **)(_DWORD *, float *))(*a2 + 36))(a2, &v25);
        else
          sub_1000C3D8((int)&v25);
        v4 = v32;
        *((_DWORD *)this + 2) = 2;
      }
    }
    v35 = -1;
    if ( v4 )
      operator delete(v4);
  }
  if ( *((_DWORD *)this + 2) == 2 )
  {
    v11 = sub_10001DFC(*(_DWORD *)(*((_DWORD *)this + 9) + 292));
    v12 = _RTDynamicCast(
            v11,
            0,
            &GameClient::WorldObject `RTTI Type Descriptor',
            &GameClient::Robot `RTTI Type Descriptor',
            0);
    if ( !v12 )
      return;
    v24 = *((_DWORD *)this + 8);
    v13 = GameClient::FuncManager::Instance();
    Function = GameClient::FuncManager::GetFunction(v13, v24);
    v15 = Function;
    if ( !Function )
    {
LABEL_34:
      *((_DWORD *)this + 2) = 1;
      return;
    }
    v16 = *((_DWORD *)Function + 7);
    v25 = *(float *)(v16 + 24);
    v17 = *(float *)(v16 + 32);
    v18 = *(float *)(v12 + 24);
    v26 = 0.0;
    v19 = *(_DWORD *)(v12 + 28);
    v28 = v18;
    v27 = v17;
    v20 = *(float *)(v12 + 32);
    v31 = v25 - v18;
    v30 = v20;
    v29 = v19;
    *(float *)&v32 = 0.0 - 0.0;
    v21 = v27 - v20;
    v33 = v21;
    sub_1000A984();
    if ( *(float *)(v12 + 328) * *(float *)this <= v21 )
    {
      sub_1000C3D8((int)&v25);
    }
    else
    {
      (*(void (__thiscall **)(struct GameClient::Function *, _DWORD, int, int))(*(_DWORD *)v15 + 72))(
        v15,
        *((_DWORD *)this + 9),
        (int)this + 12,
        1);
      *((_DWORD *)this + 2) = 3;
    }
  }
  if ( !a2 )
  {
    *((_DWORD *)this + 2) = 0;
    return;
  }
  v22 = a2[90];
  if ( v22 == 2 || v22 == 1 )
  {
    v23 = *((_DWORD *)this + 2);
    if ( v23 == 4 || v23 == 2 )
      goto LABEL_34;
  }
}
