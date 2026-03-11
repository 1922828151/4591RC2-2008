/*
 * func-name: sub_10036010
 * func-address: 0x10036010
 * callers: 0x10036480, 0x100d8b50
 * callees: 0x101a2522
 */

const struct std::locale::facet *__cdecl sub_10036010(std::locale *a1)
{
  unsigned int v1; // eax
  const struct std::locale::facet *v2; // esi
  std::locale::facet *v3; // edi
  std::locale::facet *v5; // [esp+4h] [ebp-20h] BYREF
  _BYTE v6[4]; // [esp+8h] [ebp-1Ch] BYREF
  _BYTE pExceptionObject[12]; // [esp+Ch] [ebp-18h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v6, 0);
  v8 = 0;
  v5 = (std::locale::facet *)dword_10283F2C;
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
      dword_10283F2C = (int)v5;
      v3 = v5;
      std::locale::facet::_Incref(v5);
      std::locale::facet::_Register(v3);
    }
  }
  v8 = -1;
  std::_Lockit::~_Lockit((std::_Lockit *)v6);
  return v2;
}
