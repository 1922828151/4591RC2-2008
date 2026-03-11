/*
 * func-name: ?SaveInputConfig@Input@@QAEXXZ
 * func-address: 0x100db940
 * callers: none
 * callees: 0x1017dcf0
 */

void __thiscall Input::SaveInputConfig(Input *this)
{
  unsigned int v2; // edi
  int *v3; // ebp
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // ebp
  int (__thiscall *v10)(Input *, _BYTE *, int); // edx
  int v11; // ebp
  int (__thiscall *v12)(Input *, _BYTE *, int); // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char v18; // [esp-38h] [ebp-114h] BYREF
  int v19; // [esp-34h] [ebp-110h]
  int v20; // [esp-30h] [ebp-10Ch]
  int v21; // [esp-2Ch] [ebp-108h]
  int v22; // [esp-28h] [ebp-104h]
  int v23; // [esp-24h] [ebp-100h]
  int v24; // [esp-20h] [ebp-FCh]
  int v25[11]; // [esp-1Ch] [ebp-F8h] BYREF
  char *v26; // [esp+10h] [ebp-CCh]
  unsigned int v27; // [esp+14h] [ebp-C8h]
  int v28; // [esp+18h] [ebp-C4h]
  int v29; // [esp+1Ch] [ebp-C0h]
  int *v30; // [esp+20h] [ebp-BCh]
  int *v31; // [esp+24h] [ebp-B8h]
  int v32[7]; // [esp+28h] [ebp-B4h] BYREF
  _BYTE v33[28]; // [esp+44h] [ebp-98h] BYREF
  _BYTE v34[28]; // [esp+60h] [ebp-7Ch] BYREF
  _BYTE v35[28]; // [esp+7Ch] [ebp-60h] BYREF
  _BYTE v36[28]; // [esp+98h] [ebp-44h] BYREF
  int v37[7]; // [esp+B4h] [ebp-28h] BYREF
  int v38; // [esp+D8h] [ebp-4h]

  v2 = 0;
  v3 = (int *)((char *)this + 116);
  v27 = 0;
  v28 = 0;
  v26 = (char *)this + 116;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 7);
    if ( !v4 || v2 >= (*((_DWORD *)this + 8) - v4) / 28 )
      break;
    v5 = *((_DWORD *)this + 11);
    if ( !v5 || v2 >= (*((_DWORD *)this + 12) - v5) >> 2 )
      invalid_parameter_noinfo();
    v6 = *((_DWORD *)this + 7);
    v29 = *(_DWORD *)(*((_DWORD *)this + 11) + 4 * v2);
    if ( !v6 || v2 >= (*((_DWORD *)this + 8) - v6) / 28 )
      invalid_parameter_noinfo();
    v7 = *(v3 - 1);
    v8 = v28 + *((_DWORD *)this + 7);
    v9 = *v3;
    std::string::string(v32);
    v38 = 0;
    if ( v7 == -1 )
    {
      if ( v9 == -1 )
        goto LABEL_18;
      v17 = (*(int (__thiscall **)(Input *, int *, int))(*(_DWORD *)this + 112))(this, v37, v9);
      LOBYTE(v38) = 7;
      std::string::operator=(v32, v17);
      LOBYTE(v38) = 0;
      std::string::~string(v37);
      v30 = v25;
      std::string::string(v25, v32);
      LOBYTE(v38) = 8;
      v31 = (int *)&v18;
    }
    else
    {
      v10 = *(int (__thiscall **)(Input *, _BYTE *, int))(*(_DWORD *)this + 112);
      if ( v9 == -1 )
      {
        v16 = v10(this, v33, v7);
        LOBYTE(v38) = 5;
        std::string::operator=(v32, v16);
      }
      else
      {
        v11 = v10(this, v33, v9);
        v12 = *(int (__thiscall **)(Input *, _BYTE *, int))(*(_DWORD *)this + 112);
        LOBYTE(v38) = 1;
        v13 = v12(this, v36, v7);
        LOBYTE(v38) = 2;
        v14 = std::operator+<char>(v34, v13, ",");
        LOBYTE(v38) = 3;
        v15 = std::operator+<char>(v35, v14, v11);
        LOBYTE(v38) = 4;
        std::string::operator=(v32, v15);
        LOBYTE(v38) = 3;
        std::string::~string(v35);
        LOBYTE(v38) = 2;
        std::string::~string(v34);
        LOBYTE(v38) = 1;
        std::string::~string(v36);
      }
      LOBYTE(v38) = 0;
      std::string::~string(v33);
      v31 = v25;
      std::string::string(v25, v32);
      LOBYTE(v38) = 6;
      v30 = (int *)&v18;
    }
    std::string::string(&v18, v8);
    LOBYTE(v38) = 0;
    sub_1017DCF0(v29, v18, v19, v20, v21, v22, v23, v24, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5], v25[6]);
LABEL_18:
    v38 = -1;
    std::string::~string(v32);
    ++v27;
    v28 += 28;
    v26 += 8;
    v3 = (int *)v26;
    v2 = v27;
  }
}
