/*
 * func-name: ?DeserializationComplete@ActorInstancer@@UAEXXZ
 * func-address: 0x100544c0
 * callers: none
 * callees: 0x100542a0, 0x1007ec70
 */

void __thiscall ActorInstancer::DeserializationComplete(ActorInstancer *this)
{
  *((_BYTE *)this + 1053) = 1;
  if ( !*((_BYTE *)Editor::Instance() + 2122) )
  {
    ActorInstancer::DoInstancing(this);
    *((float *)this + 205) = 0.0;
  }
}
