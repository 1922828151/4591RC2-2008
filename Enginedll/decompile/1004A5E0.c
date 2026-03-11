/*
 * func-name: ?FindFirstNode@XMLSystem@@QAEPAVDOMElement@xercesc_2_5@@PAV23@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1004a5e0
 * callers: 0x10036a40, 0x10037000, 0x100373d0, 0x10037b30, 0x100384a0, 0x10038ca0, 0x1003a4c0, 0x1003e810, 0x1003ef60, 0x10040990, 0x100412c0, 0x10041980, 0x10042bf0, 0x10043960, 0x10044ab0, 0x10044cf0, 0x10045680, 0x10045740, 0x10047170, 0x10047270, 0x10047a80, 0x10047d90, 0x1004bcb0, 0x100e6db0
 * callees: 0x10049250
 */

int __stdcall XMLSystem::FindFirstNode(int a1, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int (__thiscall *v8)(int); // edx
  int v9; // edi
  int v10; // esi
  char *v11; // eax
  int v13; // esi
  _BYTE v14[28]; // [esp+10h] [ebp-28h] BYREF
  int v15; // [esp+34h] [ebp-4h]

  v8 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 20);
  v9 = 0;
  v15 = 0;
  v10 = v8(a1);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10) )
  {
    while ( 1 )
    {
      v11 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 4))(v10, v9);
      XMLSystem::GetName((int)v14, v11);
      LOBYTE(v15) = 1;
      if ( (unsigned __int8)std::operator==<char>(v14, &a2) )
        break;
      LOBYTE(v15) = 0;
      std::string::~string(v14);
      if ( ++v9 >= (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10) )
        goto LABEL_4;
    }
    v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 4))(v10, v9);
    LOBYTE(v15) = 0;
    std::string::~string(v14);
    v15 = -1;
    std::string::~string(&a2);
    return v13;
  }
  else
  {
LABEL_4:
    v15 = -1;
    std::string::~string(&a2);
    return 0;
  }
}
