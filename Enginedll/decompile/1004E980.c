/*
 * func-name: ?ExcludeListContains@Actor@@QAE_NPBD@Z
 * func-address: 0x1004e980
 * callers: 0x1004f690
 * callees: none
 */

char __thiscall Actor::ExcludeListContains(Actor *this, const char *a2)
{
  int v3; // ebx
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax
  _BYTE v8[28]; // [esp+10h] [ebp-28h] BYREF
  int v9; // [esp+34h] [ebp-4h]

  std::string::string(v8, a2);
  v3 = 0;
  v9 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 85);
    if ( !v5 || i >= (*((_DWORD *)this + 86) - v5) / 28 )
      break;
    v6 = *((_DWORD *)this + 85);
    if ( !v6 || i >= (*((_DWORD *)this + 86) - v6) / 28 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v3 + *((_DWORD *)this + 85), v8) )
    {
      v9 = -1;
      std::string::~string(v8);
      return 1;
    }
    v3 += 28;
  }
  v9 = -1;
  std::string::~string(v8);
  return 0;
}
