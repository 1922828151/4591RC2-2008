/*
 * func-name: ??0MaterialIntersect@@QAE@ABV0@@Z
 * func-address: 0x1015a860
 * callers: none
 * callees: 0x1015a400
 */

MaterialIntersect *__thiscall MaterialIntersect::MaterialIntersect(
        MaterialIntersect *this,
        const struct MaterialIntersect *a2)
{
  sub_1015A400((int)this, (int)a2);
  sub_1015A400((int)this + 16, (int)a2 + 16);
  std::string::string((char *)this + 32, (char *)a2 + 32);
  return this;
}
