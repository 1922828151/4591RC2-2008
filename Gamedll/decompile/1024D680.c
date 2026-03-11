/*
 * func-name: sub_1024D680
 * func-address: 0x1024d680
 * callers: 0x1000a1c3
 * callees: 0x1000e13d, 0x10011270, 0x1001496b, 0x1001971d, 0x1001abbd, 0x102c9d50
 */

void __thiscall sub_1024D680(int this, int a2)
{
  _DWORD *v3; // ebx
  bool v4; // cf
  void **v5; // ebx
  bool v6; // cf
  _DWORD *v7; // ebp
  unsigned int v8; // ebx
  bool v9; // cc
  void *v10; // esi
  _DWORD *v11; // eax
  int v12; // ecx
  void **v13; // eax
  void **v14; // ebx
  _DWORD *v15; // esi
  bool v16; // zf
  _DWORD *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // esi
  void *v20; // [esp-Ch] [ebp-50h] BYREF
  void *v21; // [esp-8h] [ebp-4Ch]
  int v22; // [esp-4h] [ebp-48h]
  int v23; // [esp+0h] [ebp-44h]
  int v24; // [esp+4h] [ebp-40h]
  void *v25; // [esp+14h] [ebp-30h]
  void **v26; // [esp+18h] [ebp-2Ch]
  _DWORD v27[2]; // [esp+1Ch] [ebp-28h] BYREF
  _BYTE v28[8]; // [esp+24h] [ebp-20h] BYREF
  _BYTE v29[12]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

  Outpop::Utility::Time_Value::gettimeofday(v28);
  v30 = 0;
  while ( sub_10011270() )
  {
    v3 = *(_DWORD **)(this + 4);
    v4 = (unsigned int)v3 < *(_DWORD *)(this + 8);
    if ( (unsigned int)v3 > *(_DWORD *)(this + 8) )
    {
      _invalid_parameter_noinfo();
      v4 = (unsigned int)v3 < *(_DWORD *)(this + 8);
    }
    if ( !v4 )
      _invalid_parameter_noinfo();
    if ( !Outpop::Utility::operator<=(*v3 + 20, v28) )
      break;
    v5 = *(void ***)(this + 4);
    v6 = (unsigned int)v5 < *(_DWORD *)(this + 8);
    if ( (unsigned int)v5 > *(_DWORD *)(this + 8) )
    {
      _invalid_parameter_noinfo();
      v6 = (unsigned int)v5 < *(_DWORD *)(this + 8);
    }
    if ( !v6 )
      _invalid_parameter_noinfo();
    v7 = *v5;
    v27[0] = *v5;
    if ( v27[0] )
      ++v7[9];
    v8 = *(_DWORD *)(this + 8);
    v9 = *(_DWORD *)(this + 4) <= v8;
    LOBYTE(v30) = 1;
    if ( !v9 )
      _invalid_parameter_noinfo();
    v10 = *(void **)(this + 4);
    if ( (unsigned int)v10 > *(_DWORD *)(this + 8) )
      _invalid_parameter_noinfo();
    LOBYTE(v25) = *(_BYTE *)(this + 16);
    if ( (int)((v8 - (_DWORD)v10) & 0xFFFFFFFC) > 4 )
    {
      v11 = *(_DWORD **)(v8 - 4);
      v22 = 0;
      v21 = v25;
      v26 = &v20;
      v20 = v11;
      if ( v11 )
        ++v11[9];
      sub_1001ABBD(v10, v8 - 4, v8 - 4, v20, (char)v21);
    }
    v12 = *(_DWORD *)(this + 4);
    if ( v12 )
    {
      v13 = *(void ***)(this + 8);
      v26 = v13;
      if ( ((int)v13 - v12) >> 2 )
      {
        v14 = v13 - 1;
        do
        {
          v15 = *v14;
          if ( *v14 )
          {
            v16 = v15[9]-- == 1;
            if ( v16 )
            {
              v27[1] = v15;
              LOBYTE(v30) = 2;
              Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(v15 + 7));
              LOBYTE(v30) = 1;
              Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(v15 + 5));
              operator delete(v15);
              v13 = v26;
            }
          }
          ++v14;
        }
        while ( v14 != v13 );
        *(_DWORD *)(this + 8) -= 4;
      }
    }
    if ( *((_BYTE *)v7 + 8) == 1 )
      ((void (__cdecl *)(_DWORD, _DWORD))*v7)(v7[1], v7[3]);
    if ( *((_BYTE *)v7 + 16) == 1 && *((_BYTE *)v7 + 8) == 1 )
    {
      v17 = (_DWORD *)Outpop::Utility::operator+(v29, v28, v7 + 7);
      v7[5] = *v17;
      v7[6] = v17[1];
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v29);
      sub_1001496B((int)v27);
      v18 = *(_DWORD *)(this + 8);
      if ( *(_DWORD *)(this + 4) > v18 )
        _invalid_parameter_noinfo();
      v19 = *(_DWORD *)(this + 4);
      if ( v19 > *(_DWORD *)(this + 8) )
        _invalid_parameter_noinfo();
      sub_1000E13D(this, v19, this, v18, *(_BYTE *)(this + 16));
    }
    v16 = v7[9]-- == 1;
    LOBYTE(v30) = 0;
    if ( v16 )
    {
      sub_1001971D(v23, v24);
      operator delete(v7);
    }
  }
  v30 = -1;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v28);
}
