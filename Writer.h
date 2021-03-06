/*
 *
 *
 * Distributed under the OpenDDS License.
 * See: http://www.opendds.org/license.html
 */

#ifndef WRITER_H
#define WRITER_H

#include <ace/Task.h>
#include <dds/DdsDcpsPublicationC.h>
#include <time.h>
#include "XMLParser.h"

class Writer : public ACE_Task_Base {
public:

  Writer(DDS::DataWriter_ptr writer);

  void start();

  void end();

  /** Lanch a thread to write. **/
  virtual int svc();

  bool is_finished() const;

  XMLParser *xmlParser= new XMLParser();

  struct timespec sent_time;
  bool isReceived;
private:
  DDS::DataWriter_var writer_;
  ACE_Atomic_Op<ACE_SYNCH_MUTEX, int> finished_instances_;
  int ppid;
};

#endif /* WRITER_H */
