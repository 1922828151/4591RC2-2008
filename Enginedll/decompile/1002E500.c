/*
 * func-name: ??0ShaderManager@@QAE@ABV0@@Z
 * func-address: 0x1002e500
 * callers: none
 * callees: 0x10029c10, 0x1002c530, 0x1002c620
 */

ShaderManager *__thiscall ShaderManager::ShaderManager(ShaderManager *this, const struct ShaderManager *a2)
{
  *(_DWORD *)this = &ShaderManager::`vftable';
  sub_10029C10((_BYTE *)this + 4, (int)a2 + 4);
  sub_1002C530((int)this + 100, (int)a2 + 100);
  sub_1002C620((int)this + 116, (int)a2 + 116);
  *((float *)this + 33) = 0.0;
  *((float *)this + 34) = 0.0;
  *((float *)this + 35) = 0.0;
  *((float *)this + 37) = 0.0;
  *((float *)this + 38) = 0.0;
  *((float *)this + 39) = 0.0;
  *((float *)this + 41) = 0.0;
  *((float *)this + 42) = 0.0;
  *((float *)this + 43) = 0.0;
  *((float *)this + 45) = 0.0;
  *((float *)this + 46) = 0.0;
  *((float *)this + 47) = 0.0;
  qmemcpy((char *)this + 132, (char *)a2 + 132, 0x4Cu);
  return this;
}
