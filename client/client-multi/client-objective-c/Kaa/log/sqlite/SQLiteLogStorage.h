/*
 * Copyright 2014-2016 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "LogStorage.h"

/**
 * Persistent log storage that uses SQLite to store all added records.
 */
@interface SQLiteLogStorage : NSObject <LogStorage, LogStorageStatus>

- (instancetype)initWithBucketSize:(int64_t)bucketSize
                 bucketRecordCount:(int32_t)bucketRecordCount;

- (instancetype)initWithDatabaseName:(NSString *)dbName
                          bucketSize:(int64_t)bucketSize
                   bucketRecordCount:(int32_t)bucketRecordCount;

@end
