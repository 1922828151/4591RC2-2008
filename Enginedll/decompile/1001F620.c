/*
 * func-name: ??0SkinWeights@Mesh@@QAE@XZ
 * func-address: 0x1001f620
 * callers: 0x100eaad0, 0x1011b870, 0x1011d270
 * callees: 0x101786e0, 0x101a251c
 */

Mesh::SkinWeights *__thiscall Mesh::SkinWeights::SkinWeights(Mesh::SkinWeights *this)
{
  std::string::string(this);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 16) = 0.0;
  *((float *)this + 17) = 0.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 20) = 0.0;
  *((float *)this + 21) = 0.0;
  *((float *)this + 23) = 0.0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  *((float *)this + 27) = 0.0;
  *((float *)this + 28) = 0.0;
  *((float *)this + 29) = 0.0;
  memset((char *)this + 60, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 30) = 1.0;
  return this;
}
