/*
 * func-name: ?CacheSoundTMP@Precacher@@SAPAVSound@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1010b610
 * callers: 0x1010bd80, 0x1010cb00
 * callees: 0x10054c00, 0x1010fd40, 0x101150d0, 0x1017a2d0, 0x1017a310, 0x1017a610
 */

_DWORD *__cdecl Precacher::CacheSoundTMP(char a1)
{
  int v1; // eax
  int v2; // eax
  void *v3; // esi
  struct AudioDevice *v4; // eax
  _DWORD *v5; // esi
  void (__thiscall **v6)(_DWORD *, int, _DWORD); // edi
  int v7; // eax
  _DWORD v9[2]; // [esp+4h] [ebp-4Ch] BYREF
  _BYTE v10[28]; // [esp+Ch] [ebp-44h] BYREF
  _BYTE v11[28]; // [esp+28h] [ebp-28h] BYREF
  int v12; // [esp+4Ch] [ebp-4h]

  v12 = 0;
  std::string::string(v10);
  LOBYTE(v12) = 1;
  v1 = sub_1017A2D0(v11, &a1);
  LOBYTE(v12) = 2;
  std::string::operator=(v10, v1);
  LOBYTE(v12) = 1;
  std::string::~string(v11);
  v2 = sub_1017A310(v11, v10);
  LOBYTE(v12) = 3;
  std::string::operator=(v10, v2);
  LOBYTE(v12) = 1;
  std::string::~string(v11);
  sub_1017A610(v10);
  sub_1010FD40(v9, v10);
  v3 = dword_11241594;
  if ( !v9[0] || (_UNKNOWN *)v9[0] != &unk_11241590 )
    invalid_parameter_noinfo();
  if ( (void *)v9[1] == v3 )
  {
    v4 = AudioDevice::Instance();
    v5 = (_DWORD *)(*(int (__thiscall **)(struct AudioDevice *))(*(_DWORD *)v4 + 12))(v4);
    v6 = (void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 4);
    v7 = std::string::c_str(&a1);
    (*v6)(v5, v7, 0);
    *(_DWORD *)sub_101150D0(v10) = v5;
    LOBYTE(v12) = 0;
    std::string::~string(v10);
    v12 = -1;
    std::string::~string(&a1);
    return v5;
  }
  else
  {
    LOBYTE(v12) = 0;
    std::string::~string(v10);
    v12 = -1;
    std::string::~string(&a1);
    return 0;
  }
}
