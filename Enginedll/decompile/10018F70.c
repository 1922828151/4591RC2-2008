/*
 * func-name: ?ResetAnimation@Light@@QAEXXZ
 * func-address: 0x10018f70
 * callers: none
 * callees: none
 */

void __thiscall Light::ResetAnimation(Light *this)
{
  *((_BYTE *)this + 1189) = 1;
  *((float *)this + 296) = 0.0;
}
