/*
 * func-name: ?ValueFromPos@CRESlider@@IAEHH@Z
 * func-address: 0x100a3b60
 * callers: 0x100aaac0
 * callees: 0x101a26c0
 */

int __thiscall CRESlider::ValueFromPos(CRESlider *this, int a2)
{
  float v3; // [esp+0h] [ebp-8h]

  v3 = (double)(*((_DWORD *)this + 136) - *((_DWORD *)this + 135))
     / (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41));
  return (int)(v3 * (double)(a2 - *((_DWORD *)this + 41)) + (double)*((int *)this + 135) + 0.5);
}
