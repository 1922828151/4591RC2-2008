/*
 * func-name: ??1ShadowEngine@@QAE@XZ
 * func-address: 0x1000d0c0
 * callers: 0x101b95d0
 * callees: 0x1000cb70, 0x10118a60, 0x101a2500
 */

void __thiscall ShadowEngine::~ShadowEngine(void **this)
{
  Texture::~Texture(this + 6);
  if ( this[3] )
    operator delete(this[3]);
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  RenderBase::~RenderBase((RenderBase *)this);
}
