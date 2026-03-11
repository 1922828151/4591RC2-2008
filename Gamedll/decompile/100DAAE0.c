/*
 * func-name: ?Clone@AnimationModal@@MAEXPAVActor@@_N@Z_0
 * func-address: 0x100daae0
 * callers: 0x10006b95
 * callees: 0x1001a988
 */

void __thiscall AnimationModal::Clone(AnimationModal *this, struct Actor *a2, bool a3)
{
  std::string::operator=((char *)a2 + 1136, (char *)this + 1136);
  std::string::operator=((char *)a2 + 1236, (char *)this + 1236);
  std::string::operator=((char *)a2 + 1284, (char *)this + 1284);
  std::string::operator=((char *)a2 + 1340, (char *)this + 1340);
  Effect_Base::Clone(this, a2, a3);
}
