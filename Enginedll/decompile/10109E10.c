/*
 * func-name: ?PurgeActorGroup@Precacher@@SAXAAPAVActorGroup@@@Z
 * func-address: 0x10109e10
 * callers: none
 * callees: 0x100cfe70, 0x1010f500, 0x101a2500
 */

void __cdecl Precacher::PurgeActorGroup(void ***a1)
{
  struct ActorGroup **i; // esi
  int v2; // ebx
  void **v3; // esi
  int v4; // [esp+10h] [ebp-8h] BYREF
  struct ActorGroup **v5; // [esp+14h] [ebp-4h]

  v5 = *(struct ActorGroup ***)dword_11241500;
  for ( i = v5; i != (struct ActorGroup **)dword_11241500 && i[2] != (struct ActorGroup *)*a1; i = (struct ActorGroup **)*i )
    ;
  v2 = dword_11241500;
  if ( !&Precacher::m_listActorGroups )
    invalid_parameter_noinfo();
  if ( i != (struct ActorGroup **)v2 )
    sub_1010F500((int)&v4, (int)&Precacher::m_listActorGroups, i);
  v3 = *a1;
  if ( *a1 )
  {
    ActorGroup::~ActorGroup(*a1);
    operator delete(v3);
    *a1 = 0;
  }
}
