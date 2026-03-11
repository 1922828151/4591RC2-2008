/*
 * func-name: ??1Script@@QAE@XZ
 * func-address: 0x10118c10
 * callers: 0x101198c0, 0x1012fc10, 0x10138880, 0x1013db50
 * callees: 0x101197c0, 0x10119cc0
 */

void __thiscall Script::~Script(Script *this)
{
  int v1; // [esp-4h] [ebp-4h]

  v1 = *(_DWORD *)this;
  sub_10119CC0();
  sub_101197C0(v1);
}
