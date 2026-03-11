/*
 * func-name: ?CacheSound@Precacher@@SAPAVSound@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1010bd80
 * callers: none
 * callees: 0x10054c00, 0x100f5b70, 0x1010b610, 0x1010ee50, 0x101a2500
 */

char *__cdecl Precacher::CacheSound(char a1, int a2, int a3, int a4, int a5, int a6, int a7, char *a8)
{
  struct AudioDevice *v8; // eax
  char *v9; // esi
  unsigned __int8 (__thiscall **v10)(_DWORD); // edi
  int v11; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // edi
  char v15[28]; // [esp-20h] [ebp-38h] BYREF
  char *v16; // [esp-4h] [ebp-1Ch]
  int v17; // [esp+14h] [ebp-4h]

  v16 = a8;
  a8 = v15;
  v17 = 0;
  std::string::string(v15, &a1);
  Precacher::CacheSoundTMP(v15[0]);
  v8 = AudioDevice::Instance();
  v9 = (char *)(*(int (__thiscall **)(struct AudioDevice *))(*(_DWORD *)v8 + 12))(v8);
  v10 = *(unsigned __int8 (__thiscall ***)(_DWORD))v9;
  v16 = 0;
  a8 = v9;
  v11 = std::string::c_str(&a1);
  ((void (__thiscall *)(char *, int, char *))v10[1])(v9, v11, v16);
  if ( (**(unsigned __int8 (__thiscall ***)(char *))v9)(v9) )
  {
    v12 = (_DWORD *)(dword_112414E8 + 4);
    v13 = sub_100F5B70(dword_112414E8, *(_DWORD *)(dword_112414E8 + 4), &a8);
    sub_1010EE50(1);
    *v12 = v13;
    *(_DWORD *)v13[1] = v13;
  }
  else
  {
    v16 = v9;
    *(_DWORD *)v9 = &Sound::`vftable';
    operator delete(v16);
    v9 = 0;
  }
  v17 = -1;
  std::string::~string(&a1);
  return v9;
}
