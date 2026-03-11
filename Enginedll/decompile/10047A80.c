/*
 * func-name: sub_10047A80
 * func-address: 0x10047a80
 * callers: 0x10047a80, 0x10047d90
 * callees: 0x100158b0, 0x10047170, 0x10047a80, 0x10049250, 0x100492d0, 0x1004a5e0, 0x100977a0, 0x1017a310
 */

bool __thiscall sub_10047A80(int **this, int a2, int a3)
{
  int v3; // edi
  int Name; // eax
  char *FirstNode; // eax
  int v8; // esi
  int (__thiscall *v9)(int, const wchar_t *); // eax
  int v10; // eax
  int v11; // eax
  int last_of; // eax
  int v13; // eax
  int v14; // esi
  int (__thiscall *v15)(int); // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  char v19; // bl
  int v20; // edx
  int v21; // edi
  int v22; // eax
  int v23; // esi
  __int16 v24; // ax
  int v25; // edx
  char v26; // [esp-1Ch] [ebp-B8h] BYREF
  int v27; // [esp-18h] [ebp-B4h]
  int v28; // [esp-14h] [ebp-B0h]
  int v29; // [esp-10h] [ebp-ACh]
  int v30; // [esp-Ch] [ebp-A8h]
  int v31; // [esp-8h] [ebp-A4h]
  int v32; // [esp-4h] [ebp-A0h]
  int v33; // [esp+0h] [ebp-9Ch] BYREF
  _BYTE v34[28]; // [esp+Ch] [ebp-90h] BYREF
  _BYTE v35[28]; // [esp+28h] [ebp-74h] BYREF
  _BYTE v36[28]; // [esp+44h] [ebp-58h] BYREF
  _BYTE v37[28]; // [esp+60h] [ebp-3Ch] BYREF
  char *v38; // [esp+7Ch] [ebp-20h]
  int v39; // [esp+80h] [ebp-1Ch]
  int **v40; // [esp+84h] [ebp-18h]
  char v41; // [esp+8Bh] [ebp-11h]
  int *v42; // [esp+8Ch] [ebp-10h]
  int v43; // [esp+98h] [ebp-4h]

  v3 = a2;
  v42 = &v33;
  v40 = this;
  v39 = 0;
  Name = XMLSystem::GetName(v36, a2);
  v43 = 0;
  v39 = 1;
  if ( (unsigned __int8)std::operator!=<char>(Name, "CollisionModel") || (v41 = 0, a3) )
    v41 = 1;
  v43 = -1;
  std::string::~string(v36);
  if ( v41
    && (!(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"Name")
     || !(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"NodeType")) )
  {
    return 0;
  }
  v38 = &v26;
  std::string::string(&v26, "GeomData");
  FirstNode = (char *)XMLSystem::FindFirstNode(a2, v26, v27, v28, v29, v30, v31, v32);
  v8 = (int)FirstNode;
  v38 = FirstNode;
  if ( FirstNode )
  {
    v9 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
    v32 = 0;
    v10 = v9(v8, L"Include");
    XMLSystem::GetString(v37, v10, v32);
    v43 = 1;
    v11 = sub_1017A310(v35, v37);
    LOBYTE(v43) = 2;
    std::string::operator=(v37, v11);
    LOBYTE(v43) = 1;
    std::string::~string(v35);
    last_of = std::string::find_last_of(this + 11, L"\\", std::string::npos);
    v13 = std::string::substr(this + 11, v35, 0, last_of + 1);
    LOBYTE(v43) = 3;
    std::operator+<char>(v36, v13, v37);
    LOBYTE(v43) = 5;
    std::string::~string(v35);
    sub_100158B0(this[41], (int)v36);
    sub_10047170(this, v8);
    LOBYTE(v43) = 1;
    std::string::~string(v36);
    v43 = -1;
    std::string::~string(v37);
    v3 = a2;
  }
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  v15 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 8);
  v16 = 0;
  v39 = 0;
  if ( v15(v14) )
  {
    while ( 1 )
    {
      v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 4))(v14, v16);
      v18 = XMLSystem::GetName(v34, v17);
      v43 = 6;
      v19 = std::operator==<char>(v18, "Node");
      v43 = -1;
      std::string::~string(v34);
      v20 = *(_DWORD *)v14;
      if ( v19 )
        break;
      if ( ++v16 >= (unsigned int)(*(int (__thiscall **)(int))(v20 + 8))(v14) )
        goto LABEL_15;
    }
    v39 = (*(int (__thiscall **)(int, int))(v20 + 4))(v14, v16);
  }
LABEL_15:
  v21 = a3 + 1;
  if ( v39 )
    sub_10047A80(v39, a3 + 1);
  v22 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  v23 = v22;
  if ( v21 > 1 && v22 )
  {
    while ( 1 )
    {
      v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 12))(v23);
      v25 = *(_DWORD *)v23;
      if ( v24 != 3 )
        break;
      v23 = (*(int (__thiscall **)(int))(v25 + 36))(v23);
      if ( !v23 )
        return v38 || v23 || v39;
    }
    if ( (*(unsigned __int16 (__thiscall **)(int))(v25 + 12))(v23) == 1 )
    {
      v43 = 7;
      sub_10047A80(v23, v21);
    }
  }
  return v38 || v23 || v39;
}
