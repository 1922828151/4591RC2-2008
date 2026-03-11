/*
 * func-name: ??0ShadowEngine@@QAE@XZ
 * func-address: 0x10127f50
 * callers: 0x101b8760
 * callees: 0x10118b80, 0x10136290
 */

ShadowEngine *__thiscall ShadowEngine::ShadowEngine(ShadowEngine *this)
{
  RenderBase::RenderBase(this);
  *(_DWORD *)this = &ShadowEngine::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  Texture::Texture((ShadowEngine *)((char *)this + 24));
  *((_DWORD *)this + 47) = 40;
  return this;
}
