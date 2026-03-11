/*
 * func-name: sub_10044AB0
 * func-address: 0x10044ab0
 * callers: 0x10048070
 * callees: 0x10015b30, 0x10015e90, 0x100492d0, 0x1004a5e0, 0x1004a8d0, 0x101a251c
 */

unsigned int __thiscall sub_10044AB0(int this, int a2)
{
  int v3; // esi
  int (__thiscall *v4)(int); // edx
  unsigned int result; // eax
  int (__thiscall *v6)(int); // edx
  int v7; // esi
  int v8; // eax
  int FirstNode; // eax
  int v10; // edi
  int v11; // eax
  int String; // eax
  int (__thiscall *v13)(int); // eax
  int v14; // eax
  int v15; // esi
  unsigned int i; // edi
  int v17; // eax
  int (__thiscall *v18)(int, unsigned int); // edx
  int v19; // eax
  char v20; // [esp-10h] [ebp-9Ch] BYREF
  int v21; // [esp-Ch] [ebp-98h]
  int v22; // [esp-8h] [ebp-94h]
  int v23; // [esp-4h] [ebp-90h]
  int v24; // [esp+0h] [ebp-8Ch]
  int *v25; // [esp+4h] [ebp-88h]
  int *v26; // [esp+8h] [ebp-84h]
  const wchar_t *v27; // [esp+Ch] [ebp-80h]
  int v28; // [esp+1Ch] [ebp-70h]
  int v29; // [esp+20h] [ebp-6Ch] BYREF
  int v30[2]; // [esp+24h] [ebp-68h] BYREF
  int v31[8]; // [esp+2Ch] [ebp-60h] BYREF
  _BYTE v32[24]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD v33[7]; // [esp+64h] [ebp-28h] BYREF
  int v34; // [esp+88h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+8Ch] [ebp+0h]
  int *v36; // [esp+90h] [ebp+4h]

  v3 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 168))(a2, L"Material");
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 8);
  v28 = v3;
  v36 = 0;
  result = v4(v3);
  if ( result )
  {
    while ( 1 )
    {
      v6 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 4);
      v26 = v36;
      v7 = v6(v3);
      v8 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v7 + 164))(v7, L"Name", 0);
      XMLSystem::GetString(v33, v8, v26);
      ++*(_DWORD *)(this + 40);
      v30[1] = (int)&v20;
      v34 = 0;
      std::string::string(&v20, "Shader");
      FirstNode = XMLSystem::FindFirstNode(v7, v20, v21, v22, v23, v24, v25, v26);
      v10 = FirstNode;
      if ( FirstNode )
      {
        v11 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)FirstNode + 164))(FirstNode, L"File", 0);
        String = XMLSystem::GetString(v32, v11, v27);
        sub_10015E90(*(int **)(this + 164), String);
        LOBYTE(retaddr) = 0;
        std::string::~string(v32);
        v13 = *(int (__thiscall **)(int))(*(_DWORD *)v10 + 168);
        v27 = L"Parameter";
        v14 = v13(v10);
        v15 = v14;
        if ( !v14 || !(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14) )
          v15 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v10 + 168))(v10, L"Param");
        for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15); ++i )
        {
          memset(&unk_10283F40, 0, 0x400u);
          std::string::string(v31);
          v17 = *(_DWORD *)v15;
          v26 = v31;
          v25 = &v29;
          v18 = *(int (__thiscall **)(int, unsigned int))(v17 + 4);
          LOBYTE(v34) = 2;
          v29 = 0;
          v19 = v18(v15, i);
          if ( (unsigned __int8)XMLSystem::ReadParameter(
                                  (XMLSystem *)(this + 72),
                                  (int)v30,
                                  (int)&unk_10283F40,
                                  v19,
                                  (int)v25,
                                  (int)v26) )
          {
            if ( v30[0] == 9 )
              sub_10015B30(*(int **)(this + 164), (int)&unk_10283FA4);
          }
          LOBYTE(v34) = 0;
          std::string::~string(v31);
        }
      }
      v34 = -1;
      std::string::~string(v33);
      v36 = (int *)((char *)v36 + 1);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 8))(v28);
      if ( (unsigned int)v36 >= result )
        break;
      v3 = v28;
    }
  }
  return result;
}
