/*
 * func-name: ??0ClothSimulator@@QAE@ABV0@@Z
 * func-address: 0x100778a0
 * callers: none
 * callees: 0x10077180, 0x10077350
 */

ClothSimulator *__thiscall ClothSimulator::ClothSimulator(ClothSimulator *this, const struct ClothSimulator *a2)
{
  sub_10077180(this, (int)a2);
  sub_10077350((_DWORD *)this + 4, (int)a2 + 16);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return this;
}
