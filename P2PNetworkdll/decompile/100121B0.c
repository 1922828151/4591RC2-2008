/*
 * func-name: sub_100121B0
 * func-address: 0x100121b0
 * callers: 0x10012390
 * callees: 0x100232aa, 0x100232c2
 */

int __usercall sub_100121B0@<eax>(int a1@<ebx>, SOCKET *a2@<edi>)
{
  struct timeval timeout; // [esp+8h] [ebp-21Ch] BYREF
  fd_set writefds; // [esp+10h] [ebp-214h] BYREF
  fd_set exceptfds; // [esp+118h] [ebp-10Ch] BYREF

  do
  {
    writefds.fd_array[0] = *a2;
    exceptfds.fd_array[0] = writefds.fd_array[0];
    timeout.tv_sec = a1;
    timeout.tv_usec = 0;
    writefds.fd_count = 1;
    exceptfds.fd_count = 1;
  }
  while ( select(writefds.fd_array[0] + 1, 0, &writefds, &exceptfds, &timeout) < 0 && *errno() == 4 );
  return _WSAFDIsSet(*a2, &writefds) != 0 ? 0 : -998;
}
