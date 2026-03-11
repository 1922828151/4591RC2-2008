/*
 * func-name: ?GetNodeHandle@StaticModel@@QAEPAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUModelFrame@@@Z
 * func-address: 0x100ee5c0
 * callers: 0x100e1e90, 0x1010a350, 0x1010c190, 0x10137a00
 * callees: 0x1009da50
 */

struct ModelFrame *__thiscall StaticModel::GetNodeHandle(
        ModelFrame **this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct ModelFrame *a9)
{
  const char *v11; // eax
  struct ModelFrame *v12; // esi
  struct ModelFrame *v13; // [esp-4h] [ebp-14h]

  if ( this[77] )
  {
    v13 = a9;
    v11 = (const char *)std::string::c_str(&a2);
    v12 = ModelFrame::Find(this[77], v11, v13);
    std::string::~string(&a2);
    return v12;
  }
  else
  {
    std::string::~string(&a2);
    return 0;
  }
}
