/*****************************************************************************
* Licensed to the Apache Software Foundation (ASF) under one
* or more contributor license agreements.  See the NOTICE file
* distributed with this work for additional information
* regarding copyright ownership.  The ASF licenses this file
* to you under the Apache License, Version 2.0 (the
* "License"); you may not use this file except in compliance
* with the License.  You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
* KIND, either express or implied.  See the License for the
* specific language governing permissions and limitations
* under the License.
******************************************************************************/

#import "SCServiceLifecycle.h"
#import "SCServiceStatusEvent.h"

typedef NS_ENUM(NSInteger, SCServiceStatus) {
  SC_SERVICE_STARTED,
  SC_SERVICE_PAUSED,
  SC_SERVICE_RUNNING,
  SC_SERVICE_STOPPED,
  SC_SERVICE_ERROR
};

@interface SCService : NSObject <SCServiceLifecycle>

@property(readonly, nonatomic) SCServiceStatus status;

+ (NSString *)serviceId;

@end
