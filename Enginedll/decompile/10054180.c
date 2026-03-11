/*
 * func-name: ?Clone@ActorInstancer@@UAEXPAVActor@@_N@Z
 * func-address: 0x10054180
 * callers: none
 * callees: 0x1004f2e0
 */

void __thiscall ActorInstancer::Clone(ActorInstancer *this, struct Actor *a2, int a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1056, (char *)this + 1056);
  std::string::operator=((char *)a2 + 1084, (char *)this + 1084);
}
