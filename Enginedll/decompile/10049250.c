/*
 * func-name: ?GetName@XMLSystem@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x10049250
 * callers: 0x10037000, 0x100384a0, 0x1003adf0, 0x1003e810, 0x10043050, 0x10044cf0, 0x10047270, 0x10047a80, 0x10048070, 0x1004a5e0, 0x10159c30
 * callees: none
 */

int __stdcall XMLSystem::GetName(int a1, char *a2)
{
  const unsigned __int16 *v2; // eax

  v2 = (const unsigned __int16 *)(*(int (__thiscall **)(char *))(*(_DWORD *)a2 + 4))(a2);
  a2 = xercesc_2_5::XMLString::transcode(v2);
  std::string::string(a1, a2);
  xercesc_2_5::XMLString::release(&a2);
  return a1;
}
