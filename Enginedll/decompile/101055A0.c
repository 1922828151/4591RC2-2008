/*
 * func-name: ?GetCurrentDownScaled8xBuffer@PostProcess@@IAEPAUIDirect3DTexture9@@XZ
 * func-address: 0x101055a0
 * callers: none
 * callees: none
 */

struct IDirect3DTexture9 *__thiscall PostProcess::GetCurrentDownScaled8xBuffer(PostProcess *this)
{
  return (struct IDirect3DTexture9 *)*((_DWORD *)this + *((_DWORD *)this + 9) + 7);
}
