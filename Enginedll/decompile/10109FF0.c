/*
 * func-name: ?PurgeTexture@Precacher@@SAXAAPAVTexture@@@Z
 * func-address: 0x10109ff0
 * callers: none
 * callees: 0x1000cb70, 0x1010f500, 0x101a2500
 */

void __cdecl Precacher::PurgeTexture(void ***a1)
{
  struct Texture **i; // esi
  int v2; // ebx
  void **v3; // esi
  int v4; // [esp+10h] [ebp-8h] BYREF
  struct Texture **v5; // [esp+14h] [ebp-4h]

  v5 = *(struct Texture ***)dword_112414C4;
  for ( i = v5; i != (struct Texture **)dword_112414C4 && i[2] != (struct Texture *)*a1; i = (struct Texture **)*i )
    ;
  v2 = dword_112414C4;
  if ( !&Precacher::m_listTextures )
    invalid_parameter_noinfo();
  if ( i != (struct Texture **)v2 )
    sub_1010F500((int)&v4, (int)&Precacher::m_listTextures, i);
  v3 = *a1;
  if ( *a1 )
  {
    Texture::~Texture(*a1);
    operator delete(v3);
    *a1 = 0;
  }
}
