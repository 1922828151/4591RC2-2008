/*
 * func-name: sub_100163E0
 * func-address: 0x100163e0
 * callers: none
 * callees: 0x100161f0, 0x100e2550
 */

char __stdcall sub_100163E0(const char *a1)
{
  const char *v1; // esi
  const unsigned __int16 *v2; // eax
  int v3; // eax
  const char *v5; // [esp-4h] [ebp-8h]

  v1 = a1;
  if ( (*(unsigned __int16 (__thiscall **)(const char *))(*(_DWORD *)a1 + 4))(a1) )
  {
    if ( (*(unsigned __int16 (__thiscall **)(const char *))(*(_DWORD *)v1 + 4))(v1) == 1 )
      v5 = "\nError Message: ";
    else
      v5 = "\nFatal Message: ";
    sub_100161F0(std::cerr, (int)v5);
  }
  else
  {
    sub_100161F0(std::cerr, (int)"\nWarning Message: ");
  }
  v2 = (const unsigned __int16 *)(*(int (__thiscall **)(const char *))(*(_DWORD *)v1 + 8))(v1);
  a1 = xercesc_2_5::XMLString::transcode(v2);
  v3 = sub_100161F0(std::cerr, (int)a1);
  std::ostream::operator<<(v3, std::endl);
  xercesc_2_5::XMLString::release((char **)&a1);
  LogPrintf("Error saving file: %s", a1);
  return 1;
}
