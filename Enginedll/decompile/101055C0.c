/*
 * func-name: ?GetCurrentDownScaled2xBuffer@PostProcess@@IAEPAUIDirect3DTexture9@@XZ
 * func-address: 0x101055c0
 * callers: none
 * callees: none
 */

struct IDirect3DTexture9 *__thiscall PostProcess::GetCurrentDownScaled2xBuffer(PostProcess *this)
{
  return (struct IDirect3DTexture9 *)*((_DWORD *)this + *((_DWORD *)this + 15) + 13);
}
