/*
 * func-name: ?updateSystemPart@Robot@GameClient@@IAEXM@Z_0
 * func-address: 0x10174ac0
 * callers: 0x10013ad4
 * callees: 0x1000f1ff, 0x10014669, 0x100195e7
 */

void __thiscall GameClient::Robot::updateSystemPart(GameClient::Robot *this, float a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  unsigned __int8 (__thiscall *v5)(int, _BYTE *, _BYTE *, _DWORD); // eax
  bool v6; // bl
  int v7; // ecx
  void (__cdecl *v8)(); // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int *v13; // ecx
  int v14; // edx
  bool v15; // bl
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  unsigned int i; // edi
  int v26; // ecx
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // [esp+50h] [ebp-E4h]
  _BYTE v34[28]; // [esp+54h] [ebp-E0h] BYREF
  _BYTE v35[28]; // [esp+70h] [ebp-C4h] BYREF
  _BYTE v36[28]; // [esp+8Ch] [ebp-A8h] BYREF
  _BYTE v37[48]; // [esp+A8h] [ebp-8Ch] BYREF
  _BYTE v38[16]; // [esp+D8h] [ebp-5Ch] BYREF
  _BYTE v39[48]; // [esp+E8h] [ebp-4Ch] BYREF
  float v40[4]; // [esp+118h] [ebp-1Ch] BYREF
  int v41; // [esp+130h] [ebp-4h]

  v3 = 0;
  v33 = 0;
  if ( *((_DWORD *)this + 50) )
  {
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 50) + 36))(*((_DWORD *)this + 50), (char *)this + 24);
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 50) + 40))(*((_DWORD *)this + 50), (char *)this + 36);
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 50) + 32))(LODWORD(a2));
  }
  if ( *((_DWORD *)this + 51) )
  {
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 51) + 36))(*((_DWORD *)this + 51), (char *)this + 24);
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 51) + 40))(*((_DWORD *)this + 51), (char *)this + 36);
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 51) + 32))(LODWORD(a2));
  }
  if ( *((_DWORD *)this + 52) )
  {
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 52) + 36))(*((_DWORD *)this + 52), (char *)this + 24);
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 52) + 40))(*((_DWORD *)this + 52), (char *)this + 36);
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 52) + 32))(LODWORD(a2));
  }
  if ( *((_DWORD *)this + 57) )
  {
    if ( !*((_BYTE *)this + 700) )
    {
      sub_10014669(v37);
      v6 = 0;
      if ( *((_DWORD *)this + 43) )
      {
        std::string::string(v34, "WeaponPoint0");
        v4 = *((_DWORD *)this + 43);
        v5 = *(unsigned __int8 (__thiscall **)(int, _BYTE *, _BYTE *, _DWORD))(*(_DWORD *)v4 + 120);
        v41 = 0;
        v33 = 1;
        if ( v5(v4, v34, v37, 0) )
          v6 = 1;
      }
      v41 = -1;
      if ( (v33 & 1) != 0 )
      {
        v33 &= ~1u;
        std::string::~string(v34);
      }
      if ( v6 )
      {
        (*(void (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 57) + 40))(*((_DWORD *)this + 57), v37);
        (*(void (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 57) + 36))(*((_DWORD *)this + 57), v38);
      }
    }
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 57) + 32))(LODWORD(a2));
  }
  while ( 1 )
  {
    v7 = *((_DWORD *)this + 63);
    if ( !v7 || v3 >= (*((_DWORD *)this + 64) - v7) >> 2 )
      break;
    v8 = _invalid_parameter_noinfo;
    v9 = *((_DWORD *)this + 63);
    if ( *(_DWORD *)(v9 + 4 * v3) )
    {
      if ( !v9 || v3 >= (*((_DWORD *)this + 64) - v9) >> 2 )
        _invalid_parameter_noinfo();
      v10 = *((_DWORD *)this + 63);
      if ( *(_DWORD *)(v10 + 4 * v3) != *((_DWORD *)this + 57) )
      {
        if ( !v10 || v3 >= (*((_DWORD *)this + 64) - v10) >> 2 )
          _invalid_parameter_noinfo();
        if ( GameClient::SystemPart::GetSystemPartType(*(GameClient::SystemPart **)(*((_DWORD *)this + 63) + 4 * v3)) == 3
          && (signed int)v3 < *((_DWORD *)this + 86) )
        {
          sub_10014669(v39);
          v15 = 0;
          if ( *((_DWORD *)this + 43) )
          {
            v11 = sub_100195E7((int)v36, v3);
            v41 = 1;
            v12 = std::operator+<char>(v35, "BackPoint", v11);
            v13 = (int *)*((_DWORD *)this + 43);
            v14 = *v13;
            v33 |= 6u;
            v41 = 2;
            if ( (*(unsigned __int8 (__thiscall **)(int *, int, _BYTE *, _DWORD))(v14 + 120))(v13, v12, v39, 0) )
              v15 = 1;
          }
          v41 = 1;
          if ( (v33 & 4) != 0 )
          {
            v33 &= ~4u;
            std::string::~string(v35);
          }
          v41 = -1;
          if ( (v33 & 2) != 0 )
          {
            v33 &= ~2u;
            std::string::~string(v36);
          }
          if ( v15 )
          {
            v16 = *((_DWORD *)this + 63);
            if ( !v16 || v3 >= (*((_DWORD *)this + 64) - v16) >> 2 )
              _invalid_parameter_noinfo();
            v17 = *(_DWORD *)(*((_DWORD *)this + 63) + 4 * v3);
            (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v17 + 40))(v17, v39);
            v18 = *((_DWORD *)this + 63);
            if ( !v18 || v3 >= (*((_DWORD *)this + 64) - v18) >> 2 )
              _invalid_parameter_noinfo();
            v19 = *(_DWORD *)(*((_DWORD *)this + 63) + 4 * v3);
            (*(void (__thiscall **)(int, float *))(*(_DWORD *)v19 + 36))(v19, v40);
          }
          v8 = _invalid_parameter_noinfo;
        }
        else
        {
          v21 = *((_DWORD *)this + 63);
          if ( !v21 || v3 >= (*((_DWORD *)this + 64) - v21) >> 2 )
            _invalid_parameter_noinfo();
          v22 = *(_DWORD *)(*((_DWORD *)this + 63) + 4 * v3);
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)v22 + 40))(v22, (char *)this + 36);
          v23 = *((_DWORD *)this + 63);
          if ( !v23 || v3 >= (*((_DWORD *)this + 64) - v23) >> 2 )
            _invalid_parameter_noinfo();
          v24 = *(_DWORD *)(*((_DWORD *)this + 63) + 4 * v3);
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)v24 + 36))(v24, (char *)this + 24);
        }
        v20 = *((_DWORD *)this + 63);
        if ( !v20 || v3 >= (*((_DWORD *)this + 64) - v20) >> 2 )
          v8();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 63) + 4 * v3) + 32))(LODWORD(a2));
      }
    }
    ++v3;
  }
  for ( i = 0; ; ++i )
  {
    v26 = *((_DWORD *)this + 67);
    if ( !v26 || i >= (*((_DWORD *)this + 68) - v26) >> 2 )
      break;
    v27 = *((_DWORD *)this + 67);
    if ( *(_DWORD *)(v27 + 4 * i) )
    {
      if ( !v27 || i >= (*((_DWORD *)this + 68) - v27) >> 2 )
        _invalid_parameter_noinfo();
      v28 = *((_DWORD *)this + 67);
      if ( *(_DWORD *)(v28 + 4 * i) != *((_DWORD *)this + 57) )
      {
        if ( !v28 || i >= (*((_DWORD *)this + 68) - v28) >> 2 )
          _invalid_parameter_noinfo();
        v29 = *(_DWORD *)(*((_DWORD *)this + 67) + 4 * i);
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)v29 + 40))(v29, (char *)this + 36);
        v30 = *((_DWORD *)this + 67);
        if ( !v30 || i >= (*((_DWORD *)this + 68) - v30) >> 2 )
          _invalid_parameter_noinfo();
        v31 = *(_DWORD *)(*((_DWORD *)this + 67) + 4 * i);
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)v31 + 36))(v31, (char *)this + 24);
        v32 = *((_DWORD *)this + 67);
        if ( !v32 || i >= (*((_DWORD *)this + 68) - v32) >> 2 )
          _invalid_parameter_noinfo();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 67) + 4 * i) + 32))(LODWORD(a2));
      }
    }
  }
}
