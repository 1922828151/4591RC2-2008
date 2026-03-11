/*
 * func-name: ?Destroy@ShaderVar@@AAEXXZ
 * func-address: 0x10122bb0
 * callers: 0x10003a50, 0x10009dd0, 0x10009e40, 0x1000d3d0, 0x1001be40, 0x1001bed0, 0x1001bf60, 0x1001bff0, 0x1001c080, 0x1001c120, 0x1003a4c0, 0x10040990, 0x10042bf0, 0x100e6ae0, 0x100e6db0
 * callees: 0x1000cb70, 0x101a2500, 0x101a253a
 */

void __thiscall ShaderVar::Destroy(ShaderVar *this)
{
  int v2; // eax
  void **v3; // esi

  v2 = *((_DWORD *)this + 69);
  switch ( v2 )
  {
    case 2:
      if ( *((_DWORD *)this + 15) )
      {
        operator delete[](*((void **)this + 15));
        *((_DWORD *)this + 15) = 0;
      }
      break;
    case 1:
      if ( *((_DWORD *)this + 15) )
      {
        operator delete(*((void **)this + 15));
        *((_DWORD *)this + 15) = 0;
      }
      break;
    case 3:
      v3 = (void **)*((_DWORD *)this + 15);
      if ( v3 )
      {
        Texture::~Texture(v3);
        operator delete(v3);
      }
      break;
  }
}
