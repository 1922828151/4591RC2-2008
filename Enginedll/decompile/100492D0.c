/*
 * func-name: ?GetString@XMLSystem@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x100492d0
 * callers: 0x10036a40, 0x10037000, 0x100373d0, 0x10037b30, 0x100384a0, 0x10038ca0, 0x1003a4c0, 0x1003adf0, 0x1003e810, 0x1003ef60, 0x10040990, 0x100412c0, 0x10041980, 0x10042bf0, 0x10043960, 0x10044ab0, 0x10044cf0, 0x10045680, 0x10045740, 0x10047170, 0x10047270, 0x10047a80, 0x10047d90, 0x10049460, 0x100497b0, 0x10049860, 0x10049910, 0x10049a00, 0x10049c70, 0x10049e00, 0x1004a6e0, 0x1004a8d0, 0x1004b830, 0x1004bcb0, 0x100e6db0, 0x1014a540, 0x1014a750, 0x10159c30
 * callees: none
 */

int __stdcall XMLSystem::GetString(int a1, int *a2, char *a3)
{
  int v4; // eax
  int (*v5)(void); // edx
  const unsigned __int16 *v6; // eax
  _BYTE v7[28]; // [esp+8h] [ebp-28h] BYREF
  int v8; // [esp+2Ch] [ebp-4h]

  if ( a2 )
  {
    v4 = *a2;
    if ( (_BYTE)a3 )
      v5 = *(int (**)(void))(v4 + 128);
    else
      v5 = *(int (**)(void))(v4 + 8);
    v6 = (const unsigned __int16 *)v5();
    a3 = xercesc_2_5::XMLString::transcode(v6);
    std::string::string(v7, a3);
    v8 = 1;
    xercesc_2_5::XMLString::release(&a3);
    std::string::string(a1, v7);
    LOBYTE(v8) = 0;
    std::string::~string(v7);
    return a1;
  }
  else
  {
    std::string::string(a1, &unk_101BF86A);
    return a1;
  }
}
