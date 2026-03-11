/*
 * func-name: ??0ShaderManager@@IAE@XZ
 * func-address: 0x10122c20
 * callers: 0x10122da0, 0x10123eb0
 * callees: 0x10118b80, 0x101786e0, 0x1017cd10, 0x101a251c
 */

ShaderManager *__thiscall ShaderManager::ShaderManager(ShaderManager *this)
{
  ShaderManager *result; // eax

  RenderBase::RenderBase(this);
  *(_DWORD *)this = &ShaderManager::`vftable';
  sub_1017CD10();
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
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
  memset((char *)this + 132, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 48) = 1.0;
  result = this;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  return result;
}
