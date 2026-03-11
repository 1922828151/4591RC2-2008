/*
 * func-name: ?GetCurrentDownScaled4xBuffer@PostProcess@@IAEPAUIDirect3DTexture9@@XZ
 * func-address: 0x101055b0
 * callers: none
 * callees: none
 */

struct IDirect3DTexture9 *__thiscall PostProcess::GetCurrentDownScaled4xBuffer(PostProcess *this)
{
  return (struct IDirect3DTexture9 *)*((_DWORD *)this + *((_DWORD *)this + 12) + 10);
}
