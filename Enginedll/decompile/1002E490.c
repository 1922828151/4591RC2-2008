/*
 * func-name: ??1ShaderManager@@QAE@XZ
 * func-address: 0x1002e490
 * callers: 0x101b95c0
 * callees: 0x10027060, 0x10029ca0, 0x1009ab60, 0x10118a60
 */

void __thiscall ShaderManager::~ShaderManager(ShaderManager *this)
{
  sub_10027060((int *)this + 29);
  sub_1009AB60((char *)this + 100);
  sub_10029CA0((int *)this + 1);
  RenderBase::~RenderBase(this);
}
