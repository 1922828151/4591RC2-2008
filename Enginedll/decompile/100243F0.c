/*
 * func-name: ??0SkinWeights@Mesh@@QAE@ABU01@@Z
 * func-address: 0x100243f0
 * callers: 0x100ed3c0, 0x100ed650, 0x100edc30
 * callees: 0x10022040, 0x10022800
 */

Mesh::SkinWeights *__thiscall Mesh::SkinWeights::SkinWeights(
        Mesh::SkinWeights *this,
        const struct Mesh::SkinWeights *a2)
{
  Mesh::SkinWeights *result; // eax

  std::string::string(this, a2);
  sub_10022040((_DWORD *)this + 7, (int)a2 + 28);
  sub_10022800((_DWORD *)this + 11, (int)a2 + 44);
  *((float *)this + 15) = 0.0;
  *((float *)this + 16) = 0.0;
  *((float *)this + 17) = 0.0;
  *((float *)this + 19) = 0.0;
  result = this;
  *((float *)this + 20) = 0.0;
  *((float *)this + 21) = 0.0;
  *((float *)this + 23) = 0.0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  *((float *)this + 27) = 0.0;
  *((float *)this + 28) = 0.0;
  *((float *)this + 29) = 0.0;
  qmemcpy((char *)this + 60, (char *)a2 + 60, 0x40u);
  return result;
}
