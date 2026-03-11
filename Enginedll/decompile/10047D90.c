/*
 * func-name: sub_10047D90
 * func-address: 0x10047d90
 * callers: 0x10048070
 * callees: 0x10015b30, 0x10045680, 0x10047a80, 0x100492d0, 0x10049a00, 0x1004a5e0, 0x1004a8d0, 0x101a251c
 */

int __thiscall sub_10047D90(char *this, int a2)
{
  int (__thiscall *v2)(int, const wchar_t *); // edx
  char *v3; // esi
  int result; // eax
  XMLSystem *v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int FirstNode; // ebx
  int v11; // eax
  int v12; // esi
  unsigned int i; // ebx
  int v14; // eax
  int (__thiscall *v15)(int, unsigned int); // edx
  int v16; // eax
  int v17; // ebx
  char v18; // [esp-4h] [ebp-B0h] BYREF
  int v19; // [esp+0h] [ebp-ACh]
  int v20; // [esp+4h] [ebp-A8h]
  int v21; // [esp+8h] [ebp-A4h]
  int v22; // [esp+Ch] [ebp-A0h]
  int *v23; // [esp+10h] [ebp-9Ch]
  int *v24; // [esp+14h] [ebp-98h]
  int v25; // [esp+18h] [ebp-94h]
  char *v26; // [esp+28h] [ebp-84h]
  int v27; // [esp+2Ch] [ebp-80h] BYREF
  int v28; // [esp+30h] [ebp-7Ch] BYREF
  _BYTE v29[12]; // [esp+34h] [ebp-78h] BYREF
  _BYTE v30[12]; // [esp+40h] [ebp-6Ch] BYREF
  _BYTE v31[28]; // [esp+4Ch] [ebp-60h] BYREF
  int v32[7]; // [esp+68h] [ebp-44h] BYREF
  _BYTE v33[4]; // [esp+84h] [ebp-28h] BYREF
  _BYTE v34[24]; // [esp+88h] [ebp-24h] BYREF
  int v35; // [esp+A8h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+ACh] [ebp+0h]

  v2 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164);
  v3 = this;
  v26 = this;
  result = v2(a2, L"Name");
  if ( result )
  {
    result = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"NodeType");
    if ( result )
    {
      v5 = (XMLSystem *)(v3 + 72);
      v6 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)a2 + 164))(a2, L"Name", 0);
      XMLSystem::GetString(v34, v6, v25);
      retaddr = 0;
      if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"WorldBoxMin")
        && (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"WorldBoxMax") )
      {
        v7 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"WorldBoxMin");
        XMLSystem::GetVector(v3 + 72, v29, v7, 0);
        v8 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"WorldBoxMax");
        XMLSystem::GetVector(v3 + 72, v30, v8, 0);
      }
      ++*((_DWORD *)v3 + 10);
      v9 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"NodeType");
      XMLSystem::GetString(v31, v9, 0);
      v27 = (int)&v18;
      LOBYTE(v35) = 1;
      std::string::string(&v18, "CustomProperties");
      FirstNode = XMLSystem::FindFirstNode(a2, v18, v19, v20, v21, v22, v23, v24);
      if ( FirstNode )
      {
        v27 = (int)&v18;
        std::string::string(&v18, "Actor");
        v11 = XMLSystem::FindFirstNode(FirstNode, v18, v19, v20, v21, v22, v23, v24);
        if ( v11 )
        {
          v12 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v11 + 168))(v11, L"Param");
          for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12); ++i )
          {
            memset(&unk_10284340, 0, 0x400u);
            std::string::string(v32);
            v14 = *(_DWORD *)v12;
            v24 = v32;
            v23 = &v28;
            v15 = *(int (__thiscall **)(int, unsigned int))(v14 + 4);
            LOBYTE(v35) = 2;
            v16 = v15(v12, i);
            if ( (unsigned __int8)XMLSystem::ReadParameter(v5, (int)&v27, (int)&unk_10284340, v16, (int)v23, (int)v24)
              && v27 == 9 )
            {
              sub_10015B30(*((int **)v26 + 41), (int)&unk_102843A4);
            }
            LOBYTE(v35) = 1;
            std::string::~string(v32);
          }
          v3 = v26;
        }
      }
      if ( (unsigned __int8)std::operator==<char>(v31, "GeomObject") )
      {
        v26 = &v18;
        std::string::string(&v18, "CollisionModel");
        v17 = XMLSystem::FindFirstNode(a2, v18, v19, v20, v21, v22, v23, v24);
        if ( sub_10047A80((int **)v3, a2, 0) )
        {
          if ( v17 )
            sub_10047A80((int **)v3, v17, 0);
        }
      }
      else if ( (unsigned __int8)std::operator==<char>(v31, "Light") )
      {
        sub_10045680(v3, a2);
      }
      LOBYTE(v35) = 0;
      std::string::~string(v31);
      v35 = -1;
      return std::string::~string(v33);
    }
  }
  return result;
}
