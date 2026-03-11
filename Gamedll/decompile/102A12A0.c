/*
 * func-name: sub_102A12A0
 * func-address: 0x102a12a0
 * callers: 0x1000d346
 * callees: 0x102c9d86
 */

const struct std::locale::facet *__cdecl sub_102A12A0(std::locale *a1)
{
  unsigned int v1; // eax
  const struct std::locale::facet *v2; // esi
  std::locale::facet *v3; // edi
  std::locale::facet *v5; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v6[4]; // [esp+10h] [ebp-1Ch] BYREF
  _BYTE pExceptionObject[12]; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+28h] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v6, 0);
  v8 = 0;
  v5 = (std::locale::facet *)dword_103B7DE4;
  v1 = std::locale::id::operator unsigned int(std::ctype<wchar_t>::id);
  v2 = std::locale::_Getfacet(a1, v1);
  if ( !v2 )
  {
    v2 = v5;
    if ( !v5 )
    {
      if ( std::ctype<wchar_t>::_Getcat(&v5) == -1 )
      {
        std::bad_cast::bad_cast((std::bad_cast *)pExceptionObject, "bad cast");
        CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast_std__);
      }
      v2 = v5;
      dword_103B7DE4 = (int)v5;
      v3 = v5;
      std::locale::facet::_Incref(v5);
      std::locale::facet::_Register(v3);
    }
  }
  v8 = -1;
  std::_Lockit::~_Lockit((std::_Lockit *)v6);
  return v2;
}
