/*
 * func-name: ?SetColor@Light@@QAEXAAUFloatColor@@@Z
 * func-address: 0x100dd740
 * callers: none
 * callees: none
 */

void __thiscall Light::SetColor(Light *this, struct FloatColor *a2)
{
  *((_DWORD *)this + 269) = *(_DWORD *)a2;
  *((_DWORD *)this + 270) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 271) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 272) = *((_DWORD *)a2 + 3);
}
