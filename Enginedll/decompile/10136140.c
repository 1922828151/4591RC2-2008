/*
 * func-name: ?GetTexture@Texture@@QAEPAUIDirect3DTexture9@@XZ
 * func-address: 0x10136140
 * callers: 0x1005bd90, 0x1007fd50, 0x1009d040, 0x1009d150, 0x1009d640, 0x100a17e0, 0x100a1910, 0x100b62e0, 0x100b6bc0, 0x100e1440, 0x100f1010, 0x10117840, 0x10120f40, 0x101211e0, 0x10128c50, 0x1012e2b0, 0x1015de80, 0x1015fb30, 0x1015fcb0, 0x10164ad0, 0x10169640
 * callees: 0x10137000
 */

struct IDirect3DTexture9 *__thiscall Texture::GetTexture(Texture *this)
{
  int v2; // eax
  struct TextureManager *v3; // eax
  int v4; // ecx
  unsigned int v5; // edi
  struct TextureManager *v6; // ebx

  if ( *((_DWORD *)this + 6) == -1 )
    return 0;
  v2 = *((_DWORD *)this + 1);
  if ( !v2 || !((*((_DWORD *)this + 2) - v2) >> 2) )
    return 0;
  v3 = TextureManager::Instance();
  v4 = *((_DWORD *)this + 1);
  v5 = *((_DWORD *)this + 6);
  v6 = v3;
  if ( !v4 || v5 >= (*((_DWORD *)this + 2) - v4) >> 2 )
    invalid_parameter_noinfo();
  return (struct IDirect3DTexture9 *)(*(int (__thiscall **)(struct TextureManager *, _DWORD))(*(_DWORD *)v6 + 16))(
                                       v6,
                                       *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v5));
}
